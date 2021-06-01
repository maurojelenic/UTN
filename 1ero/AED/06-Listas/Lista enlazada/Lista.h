/*
06 - Listas/Lista.h
Grupo 1
*/

#include<array>
#include<vector>

struct Node {
	Node *next = NULL;
	double value {0};
};

struct List {
	Node *head = new Node;
};

unsigned Length (const List& list);

bool Get (const List& list, const unsigned index, double& value);

bool Set (List& list, const unsigned index, const double value);

bool Insert (List& list, const unsigned index, const double value);

bool Remove (List& list, const unsigned index);