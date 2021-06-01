/*
06 - Listas/ListaTest.cpp
Grupo 1
*/

#include"Lista.h"
#include<cassert>
#include<iostream>

void LengthTests();
void GetTests();
void SetTests();
void InsertTests();
//void RemoveTests();


int main(){	
	LengthTests();	
	GetTests();
	SetTests();
	InsertTests();
	//RemoveTests();
}

void LengthTests(){
	List list;
	assert(0 == Length(list));
	
	Node newNode1 { NULL, 10};
	assert(0 == Length(list));
	
	list.head->next = &newNode1;
	assert(1 == Length(list));
		
	Node newNode2 { NULL, 10.1};
	assert(1 == Length(list));
		
	newNode1.next = &newNode2;
	
	assert(2 == Length(list));
}

void GetTests(){
	List list;
	
	double result {0};
	assert(not Get(list,0,result));
	assert(not Get(list,3,result));
	
	Node newNode1 { NULL, 10};
	list.head->next = &newNode1;
	Node newNode2 { NULL, 10.1};
	newNode1.next = &newNode2;
	
	double result {0};
	assert(not Get(list,3,result));
	assert(0 == result);
		
	assert(Get(list,0,result));
	assert(10 == result);
	assert(Get(list,1,result));
	assert(10.1 == result);
}

void SetTests(){
	List list;
	Node newNode1 { NULL, 10};
	list.head->next = &newNode1;
	Node newNode2 { NULL, 10.1};
	newNode1.next = &newNode2;
	
	double result {0};
	assert(not Set(list,3,result));
	
	assert(Set(list,0,20));
	assert(Get(list,0,result));
	assert(20 == result);
	assert(Set(list,1,0.00006));
	assert(Get(list,1,result));
	assert(0.00006 == result);
}

void InsertTests(){
	List list;
	Node newNode1 { NULL, 10};
	list.head->next = &newNode1;
	Node newNode2 { NULL, 10.1};
	newNode1.next = &newNode2;
	
	double result;
	assert(Get(list,0,result));
	assert(10 == result);
	assert(Get(list,1,result));
	assert(10.1 == result);
	
	assert(Insert(list,0,11.540));
	assert(Get(list,0,result));
	assert(11.540 == result);
	assert(Get(list,1,result));
	assert(10 == result);
	assert(Get(list,2,result));
	assert(10.1 == result);
	
	assert(Insert(list,1,320));
	assert(Get(list,0,result));
	assert(11.540 == result);
	assert(Get(list,1,result));
	assert(320 == result);
	assert(Get(list,2,result));
	assert(10 == result);
	assert(Get(list,3,result));
	assert(10.1 == result);
	
	assert(Insert(list,4,456));
	assert(Get(list,0,result));
	assert(11.540 == result);
	assert(Get(list,1,result));
	assert(456 == result);
	assert(Get(list,2,result));
	assert(10 == result);
	assert(Get(list,3,result));
	assert(10.1 == result);
	assert(Get(list,4,result));
	assert(456 == result);
	
	assert(not Insert(list,13,1));
	assert(4 == Length(list));
}

// void RemoveTests(){
	// List list;
	// Node newNode1 { NULL, 10};
	// list.head->next = &newNode1;
	// Node newNode2 { NULL, 10.1};
	// newNode1.next = &newNode2;
	
	// double result;
	// assert(Remove(list,0));
	// assert(Get(list,0,result));
	// assert(10.1 == result);
	// assert(not Get(list,1,result));
	// assert(10.1 == result);
	
	// assert(Remove(list,0));
	// assert(not Get(list,0,result));
	// assert(10.1 == result);
// }