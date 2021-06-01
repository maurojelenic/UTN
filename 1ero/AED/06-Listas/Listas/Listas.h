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