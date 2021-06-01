/*
04-Triangulo/triangulo.h
*/

#include"Punto.h"
#include <string>

struct Triangulo { 	Punto a, b, c; };

enum struct TipoDeTriangulo { Equilatero, Isosceles, Escaleno };


Triangulo ExtraerDeCinUnTriangulo();

double GetPerimetro(const Triangulo&);

bool EsEquilatero(const Triangulo&);

TipoDeTriangulo GetTipo(const Triangulo&);
