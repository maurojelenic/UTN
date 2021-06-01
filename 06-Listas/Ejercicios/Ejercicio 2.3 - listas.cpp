/*
06-listas/ejercicio 2.2
Grupo 1
*/

#include <iostream>
#include "../Listas/Listas.h"

using namespace std;
const unsigned N2 {7};
bool GetHastaNReales (Lista& lista);
double GetPromedio (const Lista& lista);
void MostrarMayoresA (const Lista& lista, double valor);
	
int  main () {
	
	Lista lista;
	if(not GetHastaNReales(lista)){
		std::cout <<"No se pudo leer el input.";
		return 1;
	}
	
	MostrarMayoresA(lista, GetPromedio(lista));
}
  
bool GetHastaNReales(Lista& lista) {
	double d {0};
	for(unsigned n; std::cin>>d; ++n){
		if(N2 == n){
			break;
		}
		Insert(lista, n, d);
	}
	
	return 0 < Length(lista);
}

double GetPromedio (const Lista& lista){
	double suma {0};
	for (unsigned i {0}; i < Length(lista); ++i) {
		suma += Get(lista, i);
	}
	return suma/Length(lista);
}


void  MostrarMayoresA (const Lista& lista, double valor) {
	for (unsigned i {0}; i < Length(lista); ++i) {
		double valorDelItem = Get(lista, i); 
		if(valorDelItem > valor)
			cout << valorDelItem;	
	}
}