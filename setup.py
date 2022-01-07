import json
import logging
import os
from pathlib import Path
import platform
from setuptools import find_packages, setup
import pybind11
from pybind11.setup_helpers import Pybind11Extension

# TODO:
#   - remove valhalla as submodule
#   - check in includes of valhalla's third_party modules
#   - check in the same valhalla library for all platforms (i.e. same commit)
#   - check in dependencies on MacOS
#   - try it out on all platforms before engaging CI again..

THIS_DIR = Path(__file__).parent.resolve()

include_dirs = [
    str(THIS_DIR.joinpath("include")),
    # some includes are referencing like <baldr/..> instead of <valhalla/baldr/..>
    str(THIS_DIR.joinpath("include", "valhalla")),
    pybind11.get_include()
]
library_dirs = [str(THIS_DIR.joinpath("lib", platform.system().lower()))]
libraries = list()
extra_link_args = list()
extra_compile_args = list()

if platform.system() == "Windows":
    libraries.extend(["libprotobuf-lite", "valhalla", "libcurl", "zlib", "Ws2_32", "ole32", "Shell32"])
    extra_compile_args.extend(["-DNOMINMAX", "-DWIN32_LEAN_AND_MEAN", "-DNOGDI"])
else:
    libraries.extend(["protobuf-lite", "valhalla", "curl", "z"])
    extra_link_args.extend(["-lvalhalla", "-lprotobuf-lite", "-lcurl", "-lz"])

# do conan dependency resolution
conanfile = tuple(Path(__file__).parent.resolve().rglob('conanbuildinfo.json'))
if conanfile:
    logging.info("Using conan to resolve dependencies.")
    with conanfile[0].open() as f:
        # it's just header-only boost so far..
        include_dirs.extend(json.load(f)['dependencies'][0]['include_paths'])
else:
    logging.warning('Conan not installed and/or no conan build detected. Assuming dependencies are installed.')

ext_modules = [
    Pybind11Extension(
        "_valhalla",
        [os.path.join("valhalla", "_valhalla.cc")],
        cxx_std=14,
        include_pybind11=False,  # use submodule'd pybind11
        library_dirs=library_dirs,
        include_dirs=include_dirs,
        extra_link_args=extra_link_args,
        extra_compile_args=extra_compile_args,
        libraries=libraries,  #, "geos", "luajit-5.1", "sqlite3", "spatialite"]
    ),
]

# open README.md for PyPI
with open(os.path.join(THIS_DIR, "README.md"), encoding="utf-8") as f:
    long_description = "\n" + f.read()

setup(
    name="valhalla",
    description="High-level bindings to the Valhalla C++ library",
    long_description=long_description,
    author="Nils Nolde",
    author_email="nils@gis-ops.com",
    packages=find_packages(exclude=["tests", "*.tests", "*.tests.*", "tests.*"]),
    python_requires=">=3.7.0",
    url="https://github.com/gis-ops/valhalla-py",
    ext_package="valhalla",
    ext_modules=ext_modules,
    zip_safe=False,
    use_scm_version=True,
)
