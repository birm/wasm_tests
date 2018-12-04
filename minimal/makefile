minimal: minimal.c
	emcc -o output.html minimal.c -O3 -s WASM=1 --shell-file template.html -s NO_EXIT_RUNTIME=1  -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall"]'
