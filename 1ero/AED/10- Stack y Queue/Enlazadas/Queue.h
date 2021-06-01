/*
10 - Stack y Queue/Enlazadas/Queue.h
Grupo 1
*/

#include<array>

template<typename T>
struct Node {
	Node<T> *next {nullptr};
	T value;
};

template<typename T>
struct Queue {
	Node<T> *front {nullptr};
	Node<T> *rear {nullptr};
	unsigned size{0};
};

template<typename T>
unsigned Length (const Queue<T>& q){
	return q.size;
}

template<typename T>
void Enqueue (Queue<T>& q, T value){
	++q.size;
	Node<T>* n = new Node<T>;
	n->value = value;
	n->next = q.rear;
	q.rear = n;
}

template<typename T>
T Dequeue (Queue<T>& q){
	--q.size;
	Node<T>* aux = q.front;
	delete q.front;
	T result = aux->value;
	q.front = aux->next;
	return result;
}