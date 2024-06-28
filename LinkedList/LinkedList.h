#include <iostream>
#include "Node.h"

#pragma once

class LinkedList
{
private:
	Node* head;
	Node* tail;
	int length;

public:
	LinkedList(int value);
	~LinkedList();
	void printList();
	Node* getHead();
	Node* getTail();
	int getLength();
	void append(int value);
};