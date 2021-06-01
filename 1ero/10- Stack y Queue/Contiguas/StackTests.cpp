/*
06-listas/listasTest.cpp
Grupo 1
*/

#include"Stack.h"
#include<assert.h>

int main() {
	Stack<int> intStack;
	
	assert(0 == Length(intStack));	
	Push(intStack, 1);
	Push(intStack, 2);
	Push(intStack, 3);
	Push(intStack, 4);
	Push(intStack, 5);
	assert(5 == Length(intStack));
	//std::cout<<Pop(intStack)<<Length(intStack)<<Pop(intStack)<<Pop(intStack)<<Pop(intStack)<<Pop(intStack)<<Length(intStack)<<std::endl;
	
	assert(5 == Pop(intStack));
	assert(4 == Length(intStack));
	
	assert(4 == Pop(intStack));
	assert(3 == Length(intStack));
	
	assert(3 == Pop(intStack));
	assert(2 == Length(intStack));
	
	assert(2 == Pop(intStack));
	assert(1 == Length(intStack));
	
	assert(1 == Pop(intStack));
	assert(0 == Length(intStack));
	
	assert(1 == Pop(intStack));
	assert(0 == Length(intStack));
}