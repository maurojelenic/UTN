/*
05-triangulo/puntotest.cpp
Grupo 1
*/

#include"Punto.h"
#include<math.h>
#include<cassert>

void AreNearTests();
void GetDistTests();
void SonDistanciasIgualesTests();
void SonDistanciasDistintasTests();

int main(){
	
	AreNearTests();

	GetDistTests();

	SonDistanciasIgualesTests();

	SonDistanciasDistintasTests();
}

void AreNearTests(){
	double x = 16.000001;
	double y = 15.999999;
	double z = 16.001023;
	double w = 15.89;
	
	assert(AreNear(x,x));
	assert(AreNear(x,y));
	assert(!AreNear(x,z));
	assert(!AreNear(w,x));
	assert(!AreNear(w,y));
	assert(!AreNear(w,z));	
}

void GetDistTests(){
	Punto a { -5, 20 };
	Punto b { 37, -23 };
	Punto c {-3,1};
	Punto d {1, -2};
	Punto e {-3,6};
	Punto f {1,3};
	Punto g {7,5};
	Punto h {3,2};
	Punto origen { 0, 0 };

	assert(0 == GetDist(a,a));
	assert(0 == GetDist(b,b));
	assert(0 == GetDist(origen,origen));
	assert(5 == GetDist(c,d));
	assert(5 == GetDist(e,f));
	assert(5 == GetDist(g,h));	
	assert(AreNear(sqrt(3613),GetDist(a,b)));
	assert(AreNear(GetDist(b,a),GetDist(a,b)));
	assert(AreNear(sqrt(425),GetDist(a,origen)));
	assert(AreNear(GetDist(a,origen),GetDist(origen,a)));
	assert(AreNear(sqrt(1898),GetDist(b,origen)));
	assert(AreNear(GetDist(b,origen),GetDist(origen,b)));
}

void SonDistanciasIgualesTests(){
	Punto a { -5, 20 };
	Punto c {-3,1};
	Punto d {1, -2};
	Punto e {-3,6};
	Punto origen { 0, 0 };
	Punto xa {sqrt(0.25),sqrt(0.75)};
	Punto xb {1, 0};
	
	assert( true == SonDistanciasIguales(xa,xb,origen));
	assert( true == SonDistanciasIguales(a,a,a));
	assert(false == SonDistanciasIguales(c,d,e));
	assert( true == SonDistanciasIguales(origen,origen,origen));
}

void SonDistanciasDistintasTests(){
	Punto a { -5, 20 };
	Punto b { 37, -23 };
	Punto c {-3,1};
	Punto e {-3,6};
	Punto g {7,5};
	Punto origen { 0, 0 };
	
	assert(SonDistanciasDistintas(a,b,c));
	assert(SonDistanciasDistintas(a,e,origen));
	assert(!SonDistanciasDistintas(g,g,g));
}