/*
08-Ordenamiento/Ordenamiento.cpp
Grupo 1
*/

#include<iostream>
#include "../07- Circulo/Circulo/Circulo.h"
#include "Listas/Listas.h"

void LeerCirculos();
void Categorizar();
void Mostrar(const Lista<Circulo*>&);

Lista<Circulo> todosLosCirculos;
std::array<Lista<Circulo*>,4> circulosEnCuadrantes;
	
int Main(){
	LeerCirculos();
	Categorizar();
	for(unsigned i{0}; i < 4; ++i)
		Mostrar(circulosEnCuadrantes.at(i));
}

void LeerCirculos(){
	Circulo unCirculo;
	while(LeerCirculo(unCirculo))
		Insert(todosLosCirculos,Length(todosLosCirculos),unCirculo);
}

void Categorizar(){
	for(unsigned i {0}; i < Length(todosLosCirculos); ++i){
		Circulo* circulo = &Get(todosLosCirculos,i);
		if(4 != GetCuadrante(circulo->Centro))
			Insert(circulosEnCuadrantes.at(GetCuadrante(circulo->Centro)),
				   Length(circulosEnCuadrantes.at(GetCuadrante(circulo->Centro))),
				   circulo);
	}
}

void Mostrar(const Lista<Circulo*>& l){
	for(unsigned i {0}; i < Length(l); ++i)
		MostrarCirculo(*Get(l,i));
	std::cout<<std::endl;
}
