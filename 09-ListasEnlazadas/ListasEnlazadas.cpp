/*
09-ListasEnlazadas/ListasEnlazadas.cpp
Grupo 1
*/



#include<iostream>
#include<array>
#include"Listas.h"

using namespace std;

//VERSION CONTIGUA 

const unsigned N {800};

struct Lista{
	array<double, N> a;
	unsigned ocupacion {0};
};

//STACK (PUSH & POP)

void PUSH(Lista &l, double valor){
	Insert(l, 0, valor);
}

void POP(Lista &l){
	Remove(l,0);
}


//QUEUE (QUEUE & DEQUEUE)

void QUEUE(Lista &l, double valor){
	Insert(l, 0, valor);
} 

void DEQUEUE(Lista &l,){
	Remove(l,Length(l));
}	
