/*
10 - Stack y Queue/Enlazadas/stack.h
Grupo 1
*/

template<typename T>
struct Node {
	Node<T> *next {nullptr};
	T value;
};

template<typename T>
struct Stack {
	Node<T> *top {nullptr};
};

template<typename T>
void Push (Stack<T>& s, T value){
	Node<T>* n = new Node<T>;
	n->value = value;
	n->next = s.top;
	s.top = n;
}

template<typename T>
T Pop (Stack<T>& s){
	T result = s.top->value;
	Node<T> *next {s.top->next};
	delete s.top;
	s.top = next;
	return result;
}