#include <iostream>
#include "LinkedList.h"

int main()
{
	LinkedList* list = new LinkedList(1);
	list->append(2);

	std::cout << "LinkedList before deleteLast(): " << std::endl;
	list->printList();
	std::cout << "Length: " << list->getLength() << std::endl;

	std::cout << std::endl;

	list->deleteLast();
	std::cout << "After deleteLast(): " << std::endl;
	list->printList();
	std::cout << "Length: " << list->getLength() << std::endl;

	std::cout << std::endl;
	
	list->deleteLast();
	std::cout << "After second deleteLast(): " << std::endl;
	list->printList();
	std::cout << "Length: " << list->getLength() << std::endl;

	std::cout << std::endl;

	list->deleteLast();
	std::cout << "After third deleteLast(): " << std::endl;
	list->printList();
	std::cout << "Length: " << list->getLength() << std::endl;

	std::cout << std::endl;
}