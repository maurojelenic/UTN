/*
06-listas/listas.h
Grupo 1
*/

#include<iostream>
#include<vector>
#include<array>

using namespace std;

const unsigned N {800};

template<typename T>
struct Lista{
	array<T, N> a;
	unsigned ocupacion;
};

template <typename T>
unsigned Length(Lista<T> const&);

template <typename T>
T Get(const Lista<T>&, unsigned);

template <typename T>
void Set(Lista<T>&, unsigned, T);

template <typename T>
void Insert(Lista<T>&, unsigned, T);

template <typename T>
void Remove(Lista<T>&, unsigned);