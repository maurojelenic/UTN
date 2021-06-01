/*
* 03-Recursividad/Mcd.cpp
* Grupo 1
* 07/06/2019
*/
#include <cassert>

unsigned Mcd (unsigned,unsigned);

int main() {
    assert(7 == Mcd(7,0));
    assert(7 == Mcd(0,7));
    assert(7 == Mcd(7,7));
    assert(0 == Mcd(0,0));
    assert(4 == Mcd(8,12));
    assert(4 == Mcd(12,8));
}

unsigned Mcd (unsigned a,unsigned b) {
return b == 0 ? a
              : Mcd(b, a%b);
}
