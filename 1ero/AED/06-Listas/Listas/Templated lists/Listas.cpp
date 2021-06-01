/*
06-listas/listas.cpp
Grupo 1
*/

#include<iostream>
#include<vector>
#include"Listas.h"
#include<assert.h>

using namespace std;

// template <typename T>
// unsigned Length(const Lista<T> &);

// template <typename T>
// double Get(const Lista<T> &, unsigned);

// template <typename T>
// void Set(Lista<T> &, unsigned, double);

// template <typename T>
// void Insert(Lista<T> &, unsigned, double);

// template <typename T>
// void Remove(Lista<T> &, unsigned);

template <typename T>
unsigned Length(Lista<T> const & l) {
	return l.ocupacion;
}

template <typename T>
T Get(const Lista<T>& l, unsigned i) {
	return l.a.at(i);
}

template <typename T>
void Set(Lista<T>& l, unsigned i, T valor) {
	l.a.at(i) = valor;
}

template <typename T>
void Insert(Lista<T>& l, unsigned i, T valor) {
	for(unsigned c {1 + Length(l)}; c > i; --c)
		Set(l, c, Get(l, c-1));	
	++l.ocupacion;
	
	Set(l, i, valor);
}

template <typename T>
void Remove(Lista<T>& l, unsigned i) {
	for(unsigned c {i}; c < Length(l) - 1; --c)
		Set(l, c, Get(l, 1+c));
	--l.ocupacion;
}