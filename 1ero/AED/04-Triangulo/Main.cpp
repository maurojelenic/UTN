/*
04-triangulo/triangulo.cpp
Grupo 1
*/

#include "Triangulo.h"
#include <iostream>
#include <string>

std::ostream& operator<<(std::ostream& stream, const TipoDeTriangulo& t)
{
	std::string result = t == TipoDeTriangulo::Escaleno ? 	"Escaleno":
						 t == TipoDeTriangulo::Equilatero ? "Equilatero": 
															"Isosceles";
    return stream << result;
}

int main(){	
	Triangulo t;
	
	t = ExtraerDeCinUnTriangulo();
	
	std::cout << GetPerimetro(t) << std::endl;
	
	std::cout << EsEquilatero(t) << std::endl;
	
	std::cout << GetTipo(t) << std::endl;
}
