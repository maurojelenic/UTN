/*
Programa que permite clasificar circulos pertenecientes a una lista de acuerdo a su cuadrante y agregarlos a sus listas de cuadrante correspondientes.
Grupo 1
*/


#include <iostream>
#include <array>
#include "Listas/Listas.h"
#include "Circulo/Circulo.h"

Lista<Circulo> c;
array<Lista<Circulo*>,4> circulosEnCuadrantes;

void LeerCirculos();
void Categorizar();
void Mostrar(const Lista<Circulo*> &);

int main() {
    LeerCirculos();
    Categorizar();
   
	//for(auto cuadrante :: circulosEnCuadrantes){
	for(unsigned i {0}; i < 4; ++i){
		std::cout << i << std::endl;
		Mostrar(circulosEnCuadrantes.at(i));
		std::cout << std::endl;
	}
}

void LeerCirculos() {
    for(Circulo unCirculo; LeerCirculo(unCirculo); )
        Insert(c, Length(c), unCirculo);
}

void Categorizar() {
	for (unsigned i{0}; i < Length(c); ++i)
	{
		Lista<Circulo*> *seleccionado = &circulosEnCuadrantes.at(GetCuadrante(Get(c, i).Centro));
		Insert(*seleccionado, Length(*seleccionado), Get(*seleccionado,i) ); //Get(c, i)
	} 
}

void Mostrar(const Lista<Circulo*> &l) {
    for( unsigned i{0}; i < Length(l); ++i)
        MostrarCirculo(*Get(l,i));
}
