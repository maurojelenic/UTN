/*
04-Triangulo/Triangulo.cpp
Grupo 1
*/

#include"Triangulo.h"
#include<iostream>

Triangulo ExtraerDeCinUnTriangulo(){
	Triangulo t;
	t.a = ExtraerDeCinUnPunto();
	t.b = ExtraerDeCinUnPunto();
	t.c = ExtraerDeCinUnPunto();
	return t;
}		

double GetPerimetro(const Triangulo& t){
	 return GetDist(t.a, t.b) +
			GetDist(t.a, t.c) + 
			GetDist(t.b, t.c);
}

TipoDeTriangulo GetTipo(const Triangulo& t){
	 return	SonDistanciasIguales(t.a,t.b,t.c)	?	TipoDeTriangulo::Equilatero:
			SonDistanciasDistintas(t.a,t.b,t.c)	?	TipoDeTriangulo::Escaleno:
												   	TipoDeTriangulo::Isosceles;
}

bool EsEquilatero(const Triangulo& t){
	return GetTipo(t) == TipoDeTriangulo::Equilatero;
}
