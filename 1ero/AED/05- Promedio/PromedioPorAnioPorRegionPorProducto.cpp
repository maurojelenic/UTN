/*
05-Promedio/Promedio.cpp
Grupo 1
*/

#include<iostream>
#include<array>
#include<string>
#include<cstddef>

const size_t anios = 11, regiones = 3, productos = 2,
             anioInicio = 2010, anioFin = 2020;
unsigned anioIngresado;
unsigned regionIngresada;
unsigned productoIngresado;

bool sonValidos ( const unsigned &, const unsigned &, const unsigned &);

struct Promedio { double Suma = 0; unsigned Cantidad = 0; };

std::array<std::array<std::array<Promedio,productos>,regiones>,anios> promediosPorRegionPorProductoPorAnio = {{{}}};

int main (){	
	
	for (double sumaIngresada; std::cin >> anioIngresado >> regionIngresada >> productoIngresado >> sumaIngresada ; )
  {
		if ( sonValidos ) {
			promediosPorRegionPorProductoPorAnio.at(anioIngresado - anioInicio).at(regionIngresada).at(productoIngresado).Suma += sumaIngresada;
			++promediosPorRegionPorProductoPorAnio.at(anioIngresado - anioInicio).at(regionIngresada).at(productoIngresado).Cantidad;
		}
	}
	
	for (unsigned anio = anioInicio; anio <= anioFin; ++anio) {
		for (unsigned region = 0; region < regiones; ++region){
			for (unsigned producto = 0; producto < productos; ++producto)
			{
				Promedio item = promediosPorRegionPorProductoPorAnio.at(anio - anioInicio).at(region).at(producto);
				if (item.Cantidad > 0)
					std::cout << anio << "\tRegion: " << region << "\tProducto: " << producto << "\tPromedio:" << item.Suma / item.Cantidad << std::endl;		
			}
		}
	}
}

bool sonValidos ( const unsigned &anio, const unsigned &region, const unsigned &producto )
{
  return ( anio >= anioInicio && anio <= anioFin      && 
           region >= 0        && region < regiones    && 
           producto >= 0      && producto < productos  ? true : false );
}
