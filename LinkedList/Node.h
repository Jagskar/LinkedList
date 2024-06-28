#include <iostream>

#pragma once

class Node
{
private:

public:
	int value;
	Node* next;

	Node(int value);
	friend std::ostream& operator<<(std::ostream& out, const Node* node);
};