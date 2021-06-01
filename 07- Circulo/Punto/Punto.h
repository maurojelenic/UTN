/*
07-Circulo/Punto.h
Grupo 1
*/

struct Punto { double x, y; };

bool AreNear (double a, double b, double delta = 0.001);

Punto ExtraerDeCinUnPunto();

double GetDist(const Punto&, const Punto&);

bool SonDistanciasIguales(const Punto& a,const Punto& b,const Punto& c);

bool SonDistanciasDistintas(const Punto& a,const Punto& b,const Punto& c);

unsigned GetCuadrante(const Punto&);
