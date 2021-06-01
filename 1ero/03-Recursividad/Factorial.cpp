/*
* 03-Recursividad/Factorial.cpp
* Grupo 1
* 07/06/2019
*/

#include<cassert>
unsigned Factorial(unsigned);

int main()
{
	assert ( 6 == Factorial( 3 ) );
    assert ( 2 == Factorial( 2 ) );
    assert ( 1 == Factorial( 0 ) );
	assert (1 == Factorial( 1 ) );
	assert (24 == Factorial(4));
	assert (120 == Factorial(5));
}

unsigned Factorial (unsigned a)
{
	return a==0 ? 1:
	       a*Factorial(a-1);
}
