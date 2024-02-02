FILES = ./build/start.o ./build/fodoos.o
INCLUDES =

all: ${FILES}
	i686-elf-ld -m elf_i386 -relocatable ${FILES} -o ./stdlib.elf

./build/start.o: ./src/start.asm
	nasm -f elf ./src/start.asm -o ./build/start.o

./build/fodoos.o: ./src/fodoos.asm
	nasm -f elf ./src/fodoos.asm -o ./build/fodoos.o

clean:
	rm -rf ${FILES}
	rm ./stdlib.elf