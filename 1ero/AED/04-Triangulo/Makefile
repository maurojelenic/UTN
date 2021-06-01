# Makes Triangulo.exe
# 2019 -  AED - Grupo 1
BIN = Triangulo.exe
OBJ = Main.o Triangulo.o Punto.o 
CC = gcc
CFLAGS = -std=c11 -Wall -pedantic-errors -m32 -D __DEBUG__ -g3 $(INCS)
# LDFLAGS = -static-libgcc
INCS = -I"C:/Program Files/Dev-Cpp/MinGW64/x86_64-w64-mingw32/
include"
LDLIBS = -L"C:/Program Files/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib32"
RM = rm -f
	$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $(BIN) $(CFLAGS) $(LDFLAGS) $(LDLIBS)
Main.o: Main.cpp Triangulo.h
	$(CC) -c Main.cpp Triangulo.h -o Main.o $(CFLAGS)
Triangulo.o: Triangulo.h Triangulo.cpp
	$(CC) -c Triangulo.h Triangulo.cpp -o Triangulo.o $(CFLAGS)
Punto.o: Punto.h Punto.cpp
	$(CC) -c Punto.h Punto.cpp -o Punto.o $(CFLAGS)
.PHONY: clean
clean:
	$(RM) $(OBJ) $(BIN)