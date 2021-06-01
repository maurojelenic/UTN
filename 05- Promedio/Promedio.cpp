/*
05-Promedio/Promedio.cpp
Grupo 1
*/

#include<iostream>

int main (){
	double x;
	double Suma = 0;
	int c = 0;
	for (c; std::cin >> x; ++c){
		Suma = Suma + x;
	}
	if (c > 0)
		std::cout << Suma/c << std::endl;
}
