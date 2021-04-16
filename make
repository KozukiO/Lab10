lab10/
Makefile

CC=g++

main.o: stabbinglines.h testStabLineprog.cpp
    g++ -c main.cpp -o main.o 

