/*
04-Triangulo/Punto.cpp
Grupo 1
*/

#include"Punto.h"
#include<iostream>
#include<math.h>


Punto ExtraerDeCinUnPunto(){
	Punto p;
	std::cin >> p.x;
	std::cin >> p.y;
	return p;
}

double GetDist(const Punto& p, const Punto& q){
	return sqrt((p.x - q.x) * (p.x - q.x) + (p.y - q.y) * (p.y - q.y));
}

bool SonDistanciasIguales(const Punto& a,const Punto& b,const Punto& c){
	 return AreNear(GetDist(a,b), GetDist(b,c)) 
		and AreNear(GetDist(b,c), GetDist(a,c));
}

bool SonDistanciasDistintas(const Punto& a,const Punto& b,const Punto& c){
     return !AreNear(GetDist(a,b), GetDist(b,c))
		and !AreNear(GetDist(a,b), GetDist(a,c))
		and !AreNear(GetDist(b,c), GetDist(a,c));
}

bool AreNear (double a, double b, double delta)
{
	return abs(a - b) <= delta;
}