/*
06-listas/listasTest.cpp
Grupo 1
*/

#include"Listas.h"
#include<assert.h>

int main() {
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