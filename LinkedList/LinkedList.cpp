#include "LinkedList.h"

LinkedList::LinkedList(int value)
{
	Node* newNode = new Node(value);
	head = newNode;
	tail = newNode;
	length = 1;
}

LinkedList::~LinkedList()
{
	Node* temp = head;
	while (head)
	{
		head = head->next;
		delete head;
		temp = head;
	}
}

Node* LinkedList::getHead()
{
	return head;
}

Node* LinkedList::getTail()
{
	return tail;
}

int LinkedList::getLength()
{
	return length;
}

void LinkedList::printList()
{
	Node* temp = head;
	while (temp)
	{
		std::cout << temp->value << std::endl;
		temp = temp->next;
	}
}

void LinkedList::append(int value)
{
	Node* newNode = new Node(value);
	if (length == 0)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		tail->next = newNode;
		tail = newNode;
	}

	length++;
}