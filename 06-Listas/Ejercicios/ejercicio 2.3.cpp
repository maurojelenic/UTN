/*
06-listas/ejercicio 2.3
Grupo 1
*/

#include <iostream>
#include <array>
#include <string>

const  unsigned N { 5 };

struct Resultado{
	std :: array<double,N> r;
	bool calculado;
}



void MostrarMayoresA(const std::array<double,N> , double ){
bool GetPromedio (double){
bool GetNReales(std::array<double,N>){	
	
int  main () {


	std::array<double,N> a;
	if(not GetNReales(a)){
		std::cout <<"no se leyo";
		return 1;
	}
	MostrarMayoresA(a, GetPromedio(a));

  }
  


void MostrarMayoresA(const std::array<double,N> &r, double valor){
	for(auto d:a){
		if(d < valor)
			cout << d;
	}
}


bool GetPromedio (double &r){
	double suma{0};
	unsigned n {0};
	for(double x; std :: cin >> x and n<5; ++n){
		break;
		suma += x;
	}
	
}


bool GetNReales(std::array<double,N> &r){
	unsigned n {0};
	for(double d; std::cin>>d; ++n){
		if(N == n){
			break;
		}
		a.at(n)=d;	
	}
	return N==n;
}









