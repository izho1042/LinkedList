#ifndef NODE_H
#define NODE_H
#include <string>
class Node {
public:
	Node(std::string message);
	~Node();
	Node *getNext();
	void setNext(Node* next);
	std::string getMessage();
	void setMessage(std::string message);
private:
	std::string m_message;
	Node *m_next;
};

#endif //NODE_H