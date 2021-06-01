/*
06-listas/listas.h
Grupo 1
*/

#include<iostream>
#include<array>

const unsigned N {800};

template <typename T>
struct Lista{
	std::array<T, N> a;
	unsigned n {0};
};

template <typename T>
unsigned Length(const Lista<T>& l){
	return l.n;
}

template <typename T>
T Get(const Lista<T>& l, unsigned index){
	return l.a.at(index);
}

template <typename T>
void Set(Lista<T>& l, unsigned int index, T value){
	l.a.at(index) = value;
}

template <typename T>
void Insert(Lista<T>& l, unsigned index, T value){
	for(unsigned i = l.n; i > index; --i){
		l.a.at(i) = l.a.at(i-1);
	}
	
	l.a.at(index) = value;
	++l.n;
}

template <typename T>
void Remove(Lista<T>& l, unsigned index){
	for(unsigned i = index; i < l.n; ++i){
		l.a.at(i) = l.a.at(1 + i);
	}
	
	--l.n;
}
///////////////////////////////////////////////////////////////////////
template <typename T>
void InsertarOrdenado(Lista<T>& l, T nuevoElemento){
	for(unsigned i {0}; i < Length(l); ++i){
		if(nuevoElemento < Get(l,i)){
			Insert(l,i,nuevoElemento);
			return;
		}
	}
	Insert(l,Length(l),nuevoElemento);
}

template <typename T>
Lista<T> Ordenar(const Lista<T>& l){
	Lista<T> result;
	
	for(unsigned i {0}; i < l.n; ++i){
		InsertarOrdenado(result,Get(l,i));
	}
	
	return result;
}

template <typename T>
void OrdenarBis(Lista<T>& l){
	for(unsigned i {0}; i < l.n - 1; ++i)
		for(unsigned j {0}; j < l.n - i - 1; ++j)
			if(Get(l,j) > Get(l,j+1)){
				T aux = Get(l,j);
				Set(l,j,Get(l,j+1));
				Set(l,j+1,aux);
			}
}