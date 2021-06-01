/*
05-Promedio/Promedio.cpp
Grupo 1
*/

#include<iostream>
#include <array>

struct PromedioPorAnio { double Suma = 0; unsigned Cantidad = 0; };

int main (){	
	std::array<PromedioPorAnio,11> promediosPorAnio;
	
	unsigned anioIngresado;
	
	for (double sumaIngresada; std::cin >> sumaIngresada >> anioIngresado; ){
		if (anioIngresado >= 2010 && anioIngresado <= 2020) {
			promediosPorAnio.at(anioIngresado - 2010).Suma += sumaIngresada;
			++promediosPorAnio.at(anioIngresado - 2010).Cantidad;
		}
	}
	
	for (unsigned i = 2010; i < 2021; ++i) {
		PromedioPorAnio item = promediosPorAnio.at(i - 2010);
		std::cout << i << "  ";
		if (item.Cantidad > 0)
			std::cout << item.Suma / item.Cantidad;
		std::cout << std::endl;
	}
}