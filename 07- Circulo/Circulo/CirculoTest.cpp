/*
07-Circulo/CirculoTest.cpp
Grupo 1
*/
#include "Circulo.h"
#include <iostream>
#include <cassert>

void GetCuadranteTests();

int Main() {
	GetCuadranteTests();
}

void GetCuadranteTests(){
	Circulo c0_1;
	c0_1.Centro.x = 0;
	c0_1.Centro.y = 0;
	c0_1.Radio = 1;

	Circulo c0_2;
	c0_2.Centro.x = 0;
	c0_2.Centro.y = 1;
	c0_2.Radio = 1;

	Circulo c0_3;
	c0_3.Centro.x = 1;
	c0_3.Centro.y = 0;
	c0_3.Radio = 1;

	Circulo c1;
	c1.Centro.x = 1;
	c1.Centro.y = 1;
	c1.Radio = 1;

	Circulo c2;
	c2.Centro.x = -1;
	c2.Centro.y = 1;
	c2.Radio = 1;

	Circulo c3;
	c3.Centro.x = -1;
	c3.Centro.y = -1;
	c3.Radio = 1;

	Circulo c4;
	c4.Centro.x = 1;
	c4.Centro.y = -1;
	c4.Radio = 1;

	assert(0 == GetCuadrante(c0_1.Centro));
	assert(0 == GetCuadrante(c0_2.Centro));
	assert(0 == GetCuadrante(c0_3.Centro));
	assert(1 == GetCuadrante(c1.Centro));
	assert(2 == GetCuadrante(c2.Centro));
	assert(3 == GetCuadrante(c3.Centro));
	assert(4 == GetCuadrante(c4.Centro));
}
