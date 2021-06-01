/*
06-listas/listas.h
Grupo 1
*/

#include<iostream>
#include<array>

const unsigned N {800};

template <typename T>
struct Stack{
	std::array<T, N> a;
	unsigned top {0};
};

template <typename T>
unsigned Length(const Stack<T>& s){
	return s.top;
}

template <typename T>
void Push(Stack<T>& s, T value){
	s.a.at(s.top) = value;
	++s.top;
}

template <typename T>
T Pop(Stack<T>& s){
	if (s.top > 0) --s.top;
	return s.a.at(s.top);
}