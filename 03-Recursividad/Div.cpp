/*
03-Recursividad/Div.cpp
Grupo 1
09/06/2019
*/


#include <cassert>

unsigned Div(unsigned,unsigned);

int main (){
	assert(2 == Div(6,3));
	assert(5 == Div(25,5));
	assert(0 == Div(5,23));
	assert(0 == Div(5,8));
	assert(1 == Div(8,5));
}
unsigned  Div(unsigned a, unsigned b) {
	return b>a? 0:
		1 + Div(a-b,b);
	}
