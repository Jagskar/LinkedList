#include <iostream>
#include "LinkedList.h"

int main()
{
	LinkedList* list = new LinkedList(4);
	list->append(5);

	std::cout << "Head: " << list->getHead() << std::endl;
	std::cout << "Tail: " << list->getTail() << std::endl;
	std::cout << "Length: " << list->getLength() << std::endl;
	
	list->printList();
}