/*
06-listas/listasTest.cpp
Grupo 1
*/

#include"Listas.h"
#include<assert.h>
#include<iostream>

void LengthGetSetInsertRemoveTests();
void InsertarOrdenadoOrdenarOrdenarBisTests();

int main() {
	LengthGetSetInsertRemoveTests();
	InsertarOrdenadoOrdenarOrdenarBisTests();
}

void InsertarOrdenadoOrdenarOrdenarBisTests(){
	Lista<int> l;
	InsertarOrdenado<int>(l,4);
	InsertarOrdenado<int>(l,11);
	InsertarOrdenado<int>(l,1);
	InsertarOrdenado<int>(l,7);
	InsertarOrdenado<int>(l,9);
	assert(1 == Get(l,0));
	assert(4 == Get(l,1));
	assert(7 == Get(l,2));
	assert(9 == Get(l,3));
	assert(11 == Get(l,4));
	
	Lista<int> l2 = Ordenar(l);
	assert(Get(l,0) == Get(l2,0));
	assert(Get(l,1) == Get(l2,1));
	assert(Get(l,2) == Get(l2,2));
	assert(Get(l,3) == Get(l2,3));
	assert(Get(l,4) == Get(l2,4));
	
	Insert(l2,3,20);
	Insert(l2,0,23);
	Insert(l2,7,0);
	Insert(l2,4,1);
	Insert(l2,6,12);
	
	Lista<int> l3 = Ordenar(l2);
	assert(0 == Get(l3,0));
	assert(1 == Get(l3,1));
	assert(1 == Get(l3,2));
	assert(4 == Get(l3,3));
	assert(7 == Get(l3,4));
	assert(9 == Get(l3,5));
	assert(11 == Get(l3,6));
	assert(12 == Get(l3,7));
	assert(20 == Get(l3,8));
	assert(23 == Get(l3,9));
	
	Lista<int> l4 = l2;
	OrdenarBis<int>(l4);
	assert(0 == Get(l4,0));
	assert(1 == Get(l4,1));
	assert(1 == Get(l4,2));
	assert(4 == Get(l4,3));
	assert(7 == Get(l4,4));
	assert(9 == Get(l4,5));
	assert(11 == Get(l4,6));
	assert(12 == Get(l4,7));
	assert(20 == Get(l4,8));
	assert(23 == Get(l4,9));
	
	// std::cout<< Get(l2,4)<<std::endl;
	// std::cout<< Get(l2,3)<<std::endl;
	// std::cout<< Get(l2,2)<<std::endl;
	// std::cout<< Get(l2,1)<<std::endl;
	// std::cout<< Get(l2,0)<<std::endl;
}

void LengthGetSetInsertRemoveTests(){
	Lista<int> li{{0,2,6}, 3};
	assert(3 == Length(li));
	assert(0 == Get(li, 0));
	assert(2 == Get(li, 1));
	assert(6 == Get(li, 2));
	
	Set<int>(li,2,3);
	assert(3 == Length(li));
	assert(0 == Get(li, 0));
	assert(2 == Get(li, 1));
	assert(3 == Get(li, 2));
	
	Lista<double> l{{0.0,0.2,0.6}, 3};
	assert(3 == Length(l));
	assert(0.0 == Get(l, 0));
	assert(0.2 == Get(l, 1));
	assert(0.6 == Get(l, 2));
	
	Set<double>(l,2,3.0);
	assert(3 == Length(l));
	assert(0.0 == Get(l, 0));
	assert(0.2 == Get(l, 1));
	assert(3.0 == Get(l, 2));
	
	Insert(l,0,1.0);
	assert(4 == Length(l));
	assert(1.0 == Get(l, 0));
	assert(0.0 == Get(l, 1));
	assert(0.2 == Get(l, 2));
	assert(3.0 == Get(l, 3));
	
	Insert(l,4,1.356);
	assert(5 == Length(l));
	assert(1.0 == Get(l, 0));
	assert(0.0 == Get(l, 1));
	assert(0.2 == Get(l, 2));
	assert(3.0 == Get(l, 3));
	assert(1.356 == Get(l, 4));
	
	Remove(l,2.0);
	assert(4 == Length(l));
	assert(1.0 == Get(l, 0));
	assert(0.0 == Get(l, 1));
	assert(3.0 == Get(l, 2));
	assert(1.356 == Get(l, 3));
	
	Remove(l,4.0);
	assert(3 == Length(l));
	assert(1.0 == Get(l, 0));
	assert(0.0 == Get(l, 1));
	assert(3.0 == Get(l, 2));
}