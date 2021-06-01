/*
06-listas/ejercicio 2.2
Grupo 1
*/

#include <iostream>
#include <array>
#include <string>


using namespace std;
const  unsigned N { 5 };
bool  GetNReales (std :: array < double , N> &a);
double  GetPromedio ( const std :: array < double , N> &a);
void  MostrarMayoresA ( const std :: array < double , N>  &a , double valor );
	double suma {0};
int  main () {


	std::array<double,N> a;
	if(not GetNReales(a)){
		std::cout <<"no se leyo";
		return 1;
	}
	MostrarMayoresA(a, GetPromedio(a));

  }
  
bool GetNReales(std :: array < double , N> &a )
{
	unsigned n {0};
	for(double d; std::cin>>d; ++n){
		if(N == n){
			break;
		}
		a.at(n)=d;	
	}
	return N==n;
}


double  GetPromedio (const std::array<double,N> &a) {
	for ( auto d: a) {	
		suma += d;
	}
	return suma/N;
}


void  MostrarMayoresA (const std::array<double,N> &a, double valor) {
	for ( auto d: a) {
		if (d >= valor)
			cout << d;
	}

	}
	
