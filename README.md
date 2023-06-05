# Installation (conda)

```bash
conda env create -f env.yml
conda activate glog
cmake -S . -B build_conda
cmake --build build_conda
build_conda/myapp
```
