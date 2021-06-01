/*
05-Promedio/PromedioPorAnioPorRegion.cpp
Grupo 1
*/

#include<iostream>
#include<array>
#include<string>

struct Promedio { double Suma = 0; unsigned Cantidad = 0; };

int main (){	
	std::array<std::array<Promedio,3>,11> promediosPorAnioPorRegion;
	
	unsigned anioIngresado;
	unsigned regionIngresada;
	
	for (double sumaIngresada; std::cin >> anioIngresado >> regionIngresada >> sumaIngresada ; ){
		if (anioIngresado >= 2010 && anioIngresado <= 2020 && regionIngresada >= 0 && regionIngresada <= 2) {
			promediosPorAnioPorRegion.at(anioIngresado - 2010).at(regionIngresada).Suma += sumaIngresada;
			++promediosPorAnioPorRegion.at(anioIngresado - 2010).at(regionIngresada).Cantidad;
		}
	}
	
	for (unsigned anio = 2010; anio < 2021; ++anio) {
		for (unsigned region = 0; region < 3; ++region){
			Promedio item = promediosPorAnioPorRegion.at(anio - 2010).at(region);
			if (item.Cantidad > 0)
				std::cout << anio << "\tRegion: " << region << "\tPromedio:" << item.Suma / item.Cantidad << std::endl;		
		}
	}
}
