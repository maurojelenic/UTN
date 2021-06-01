/*
06-listas/listasTest.cpp
Grupo 1
*/

#include"Queue.h"
#include<assert.h>

int main() {
	Queue<int> q;
	assert(0 == Length(q));
	
	Enqueue(q,84);
	assert(1 == Length(q));
	Enqueue(q,11);
	assert(2 == Length(q));
	Enqueue(q,23);
	assert(3 == Length(q));
	
	assert(84 == Dequeue(q));
	assert(2 == Length(q));
	assert(11 == Dequeue(q));
	assert(1 == Length(q));
	assert(23 == Dequeue(q));
	assert(0 == Length(q));
}