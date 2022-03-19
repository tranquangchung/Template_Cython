out_dir=lib_python
all:
	python3 setup.py build_ext --build-lib $(out_dir)
