/*
09-ListasEnlazadas/ListasEnlazadas.h
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

void PUSH(Lista &l, double valor)

void POP(Lista &l)


//QUEUE (QUEUE & DEQUEUE)

void QUEUE(Lista &l, double valor)

void DEQUEUE(Lista &l,)

