/*
07-Circulo/Circulo.cpp
Grupo 1
*/

#include "Circulo.h"
#include <iostream>
#include <cmath>
using namespace std;
bool LeerCirculo(Circulo& c) {
	Circulo circuloTentativo;

	if(!(cin >> circuloTentativo.Centro.x >> circuloTentativo.Centro.y >> circuloTentativo.Radio))
		return false;

	c = circuloTentativo;
	return true;
}

void MostrarCirculo(const Circulo& c) {
	cout << "(x - (" << c.Centro.x << "))^2 + (y - (" << c.Centro.y << "))^2 = " << c.Radio << "^2 " << std::endl;
}



