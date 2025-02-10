# Conda test C++ CMake package

Link: https://anaconda.org/mstr.danila/pwd_printer_project

## Prerequisites

### Install tools

* Install conda from [Miniconda](https://www.anaconda.com/download/success).

* Install `conda-build`:
```cmd
conda activate base
conda update conda
conda update conda-build
```

### Prepare environment

* Create env for package:
```cmd
conda create -n pwd_printer_env
```

* Activate your package env
```
conda activate pwd_printer_env
```

* Add the `conda-forge` channel:
```cmd
conda config --append channels conda-forge
```

## Build the package

```cmd
cd ./conda_test_package/conda_recipe
conda activate pwd_printer_env
conda-build .
```

## Tips

Show configured channels:
```cmd
conda config --show channels
```

## Links
* https://docs.conda.io/projects/conda-build/en/latest/user-guide/tutorials/build-pkgs.html
* https://docs.conda.io
* https://anaconda.org
* https://www.anaconda.com/download/success
* https://conda.org/
* https://docs.conda.io/projects/conda-build/en/stable/resources/package-spec.html