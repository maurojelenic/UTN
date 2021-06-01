/*
07-Circulo/Circulo.h
*/

#include "../Punto/Punto.h"

struct Circulo {
    Punto Centro;
    double Radio;
};

bool LeerCirculo(Circulo&);

void MostrarCirculo(const Circulo&);
