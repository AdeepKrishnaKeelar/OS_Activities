runme: main.cpp
	g++ main.cpp -o runme

runme1: main1.cpp asm.o
	g++ main1.cpp asm.o -o runme1
asm.o: asm.asm
	nasm -f elf64 asm.asm -o asm.o

