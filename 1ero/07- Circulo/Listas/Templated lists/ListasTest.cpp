/*
06-listas/listasTest.cpp
Grupo 1
*/

#include<iostream>
#include<vector>
#include"Listas.h"
#include<assert.h>

using namespace std;

int main() {
	Lista<double> l{0};
	assert(0 == Length(l));

	Insert(l, 0, 3.0);
	assert(1 == Length(l));
	assert(3.0 == Get(l, 0));
	
	Insert(l, 0, 5.0);
	assert(2 == Length(l));
	assert(3.0 == Get(l, 1));
	assert(5.0 == Get(l, 0));
	
	Insert(l, 0, 8.0);
	assert(3 == Length(l));
	assert(3.0 == Get(l, 2));
	assert(5.0 == Get(l, 1));
	assert(8.0 == Get(l, 0));
	
	Set(l, 2, 9.0);
	assert(3 == Length(l));
	assert(9.0 == Get(l, 2));
	assert(5.0 == Get(l, 1));
	assert(8.0 == Get(l, 0));
}