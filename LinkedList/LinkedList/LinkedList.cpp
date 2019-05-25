// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Node.h"

int main()
{
	// Node Creation
	Node* node = new Node("message");
	Node* node1 = new Node("message1");
	Node* node2 = new Node("message2");

	// Node Connection
	node->setNext(node1);
	node1->setNext(node2);

	Node* current = node;
	while (current->getNext() != NULL) {
		std::cout << current->getMessage() << std::endl;
		current = current->getNext();
	}
	std::cout << current->getMessage() << std::endl;
	delete node;
	delete node1;
	delete node2;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
