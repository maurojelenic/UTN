/*
05-Promedio/Promedio.cpp
Grupo 1
*/

#include <iostream>
#include <vector>
#include <string>

struct PromedioPorAnio { double Suma; int Cantidad; unsigned int Anio;};
std::vector<PromedioPorAnio> PromediosPorAnio;

std::istream& operator>>(std::istream& input, PromedioPorAnio& promedioPorAnio)
{
    input>>promedioPorAnio.Suma;
    input>>promedioPorAnio.Anio;
	promedioPorAnio.Cantidad = 1;
    return input;
}

std::ostream& operator<<(std::ostream& output, const PromedioPorAnio& promedioPorAnio)
{
	double promedio = promedioPorAnio.Suma / promedioPorAnio.Cantidad;
	return output << promedioPorAnio.Anio << "     " << promedio;
}

int BuscarIndicePorAnio (const int& anio);

int main() {
	for (PromedioPorAnio promedioPorAnio; std::cin >> promedioPorAnio; ){
		int indice = BuscarIndicePorAnio(promedioPorAnio.Anio);
		if(-1 != indice)
		{
			PromediosPorAnio.at(indice).Suma += promedioPorAnio.Suma;
			++PromediosPorAnio.at(indice).Cantidad;
		}
		else
		{
			PromediosPorAnio.push_back(promedioPorAnio);
		}
	}
	for(int i = 0; i < PromediosPorAnio.size(); i++)
	{
		std::cout << PromediosPorAnio.at(i) << std::endl;
	}
}

int BuscarIndicePorAnio (const int& anio){
	for(int i = 0; i < PromediosPorAnio.size(); i++)
		if(PromediosPorAnio.at(i).Anio == anio)
			return i;
	return -1;
}
