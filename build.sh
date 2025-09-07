#/bin/bash
export PREFIX="$HOME/opt/cross"
export TARGET=x86_64-elf
export PATH="$PREFIX/bin:$PATH"

mkdir -p ./bin ./build ./build/memory ./build/memory/paging ./build/memory/heap ./build/string

make all
