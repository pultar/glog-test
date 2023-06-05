# Installation 

## conda

```bash
conda env create -f env.yml
conda activate glog
cmake -S . -B build_conda
cmake --build build_conda
GLOG_logtostderr=1 build_conda/myapp
```

## brew

```bash
conda deactivate
cmake -S . -B build_brew
cmake --build build_brew
GLOG_logtostderr=1 build_brew/myapp
```
