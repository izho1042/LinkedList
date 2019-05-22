#include "Node.h"



Node::Node(std::string message): m_message(message)
{
	m_next = NULL;
}

std::string Node::getMessage() {
	return m_message;
}

void Node::setMessage(std::string message) {
	m_message = message;
}

Node *Node::getNext(){
	return m_next;
}

void Node::setNext(Node* next) {
	m_next = next;
}

Node::~Node()
{
}
