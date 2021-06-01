/*
06-listas/listas.h
Grupo 1
*/

#include<iostream>
#include<array>

const unsigned N {800};

template <typename T>
struct Queue{
	std::array<T, N> a;
	unsigned front {0};
	unsigned rear {0};
};

template <typename T>
unsigned Length(const Queue<T>& q){
	return q.rear - q.front;
}

template <typename T>
void Enqueue(Queue<T>& q, T value){
	q.a.at(q.rear) = value;
	++q.rear;
}

template <typename T>
T Dequeue(Queue<T>& q){
	++q.front;
	return q.a.at(q.front-1);
}