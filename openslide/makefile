openslide: slidetest.c
	emcc -o output.html slidetest.c -O2 -s WASM=1 --shell-file template.html -s NO_EXIT_RUNTIME=1  -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall","cwrap","_malloc"]'
