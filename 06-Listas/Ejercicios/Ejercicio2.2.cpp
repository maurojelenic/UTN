/*
06-listas/ejercicio 2.2
Grupo 1
*/

#include<iostream>
#include<array>
#include<string>



const unsigned N{5};


bool GetNreales(std::array<double,N>);
double GetPromedio(const std::array<double,N>);
void MostrarMayoresA(const std::array<double,N>, double);


int main()
	double suma {0};
	std::array<double,N> a;
	if(not GetNReales(a)){
		cout <<"no se leyo"
		return 1;
	}
	auto cota{
	GetPromedio(a);
	}
	MostrarMayoresA(a,cota);
}


bool GetNReales(std::array<double,N> &a){
	unsigned n {0};
	for(double d; std::cin>>d; ++n){
		if(N == n){
			break;
		}
		a.at(n)=d;	
	}
	return N==n;
}


double GetPromedio(const std::array<double,N> &a){
	for(auto d:a){	
		suma += d;
	}
	return suma/N;
}


void MostrarMayoresA(const std::array<double,N> &a, double valor){
	for(auto d:a){
		if(d < valor)
			cout << d;
	}
}




