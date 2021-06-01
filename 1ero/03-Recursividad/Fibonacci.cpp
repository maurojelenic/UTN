/*
* 03-Recursividad/Fibonacci.cpp
* Grupo 1
* 11/06/2019
*/
#include<cassert>

unsigned Fibonacci(unsigned);

int main()
{
	assert( 0 == Fibonacci(0));
	assert( 1 == Fibonacci(1));
	assert( 1 == Fibonacci(2));
	assert( 2 == Fibonacci(3));
	assert( 3 == Fibonacci(4));
	assert( 5 == Fibonacci(5));
}

unsigned Fibonacci (unsigned n)
{
	return n < 2 ? n :
	       Fibonacci (n-1) + Fibonacci (n-2);
}
