/*
06 - Listas/Lista.cpp
Grupo 1
*/

#include<iostream>
#include"Lista.h"

unsigned Length(const List& list){
	unsigned i {0};
	
	for(Node *iterator = list.head->next; NULL != iterator; iterator = iterator->next)
		++i;
		
	return i;
}

bool Get (const List& list, const unsigned index, double& value){
	unsigned i {0};
	for(Node *iterator = list.head->next; NULL != iterator; iterator = iterator->next){
		if(i == index) {
			value = iterator->value;
			return true;
		}
		++i;
	}
	return false;
}

bool Set(List& list, const unsigned index, const double value){
	unsigned i {0};
	for(Node *iterator = list.head->next; NULL != iterator; iterator = iterator->next){
		if(i == index) {
			iterator->value = value;
			return true;
		}
		++i;
	}
	return false;
}

bool Insert (List& list, const unsigned index, const double value){
	
	if(0 == index){
		Node newNode;
		newNode.value = value;
		newNode.next = list.head->next;
		
		list.head->next = &newNode;
		return true;
	}
	
	unsigned i {0};
	for(Node *iterator = list.head; NULL != iterator; iterator = iterator->next){
		if(1 + i == index) {
			Node newNode;
			newNode.value = value;
			newNode.next = iterator->next->next;
			
			iterator->next->next = &newNode;
			return true;
		}
		++i;
	}
	
	return false;
}

// bool Remove (List& list, unsigned index){
	
	// if(0 == index){
		// delete list.head->next;
		// list.head->next = list.head->next->next;
	
		// return true;
	// }
	
	// unsigned i {0};
	// for(Node *iterator = list.head; NULL != iterator; iterator = iterator->next){
		// if(1 + i == index) {
			// delete iterator->next;
			// iterator->next = iterator->next->next;
			
			// return true;
		// }
		// ++i;
	// }
	
	// return false;
// }