#include "Node.h"

Node::Node(int value)
{
	this->value = value;
	next = nullptr;
}

std::ostream& operator<<(std::ostream& out, const Node* node)
{
	out << node->value;
	
	return out;
}
