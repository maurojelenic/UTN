/*
05-triangulo/puntotest.cpp
Grupo 1
*/

#include <iostream>
#include "Triangulo.h"
#include<math.h>
#include <cassert>

void GetPerimetroTests();
void EsEquilateroTests();
void GetTipoTests();

int main(){
	
	GetPerimetroTests();
	
	EsEquilateroTests();
	
	GetTipoTests();
}

void GetPerimetroTests(){
	Triangulo t;
	t.a.x = 0;
	t.a.y = 0;
	t.b.x = 1;
	t.b.y = 1;
	t.c.x = 2;
	t.c.y = 2;
	
	Triangulo t2;
	t2.a.x = 1;
	t2.a.y = 0;
	t2.b.x = 1;
	t2.b.y = 0;
	t2.c.x = sqrt(0.25);
	t2.c.y = sqrt(0.75);
	
	assert(AreNear(5.65685,GetPerimetro(t)));
	assert(AreNear(2,GetPerimetro(t2)));
}

void EsEquilateroTests(){
	Triangulo t;
	t.a.x = 0;
	t.a.y = 0;
	t.b.x = 1;
	t.b.y = 0;
	t.c.x = sqrt(0.25);
	t.c.y = sqrt(0.75);
	
	Triangulo t2;
	t2.a.x = 1;
	t2.a.y = 0;
	t2.b.x = 1;
	t2.b.y = 0;
	t2.c.x = sqrt(0.25);
	t2.c.y = sqrt(0.75);
	
	assert( true == EsEquilatero(t));
	assert(false == EsEquilatero(t2));
}

void GetTipoTests(){
	Triangulo puntual;
	puntual.a.x = 0;
	puntual.a.y = 0;
	puntual.b.x = 0;
	puntual.b.y = 0;
	puntual.c.x = 0;
	puntual.c.y = 0;
	
	Triangulo eq;
	eq.a.x = 0;
	eq.a.y = 0;
	eq.b.x = 1;
	eq.b.y = 0;
	eq.c.x = sqrt(0.25);
	eq.c.y = sqrt(0.75);
	
	Triangulo es;
	es.a.x = 0;
	es.a.y = 0;
	es.b.x = 17;
	es.b.y = 4;
	es.c.x = 2;
	es.c.y = 3;
	
	Triangulo is;
	is.a.x = 0;
	is.a.y = 0;
	is.b.x = 0;
	is.b.y = 1;
	is.c.x = sqrt(0.25);
	is.c.y = sqrt(0.75);
	
	assert(TipoDeTriangulo::Equilatero == GetTipo(puntual));
	assert(TipoDeTriangulo::Equilatero == GetTipo(eq));
	assert(TipoDeTriangulo::Escaleno == GetTipo(es));
	assert(TipoDeTriangulo::Isosceles == GetTipo(is));
}