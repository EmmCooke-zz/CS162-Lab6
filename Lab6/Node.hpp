/*************************************************
* Author: Emmet Cooke
* Date: 10/31/2017
* Description: This is the header file for the Node
* class.
*************************************************/
#ifndef NODE_HPP
#define NODE_HPP

class Node
{
private:
	int num;
	Node * prev;
	Node * next;
public:
	// Default Constructor
	Node();
	// Constructor that takes in an int and two nodes
	Node(int numIn, Node * prev, Node * next);

	// Destructor
	~Node();

	// Getters
	int getNum() const { return num; }
	Node * getPrev() const { return prev; }
	Node * getNext() const { return next; }
	
	// Setters
	void setNum(int numIn);
	void setPrev(Node * prevNode);
	void setNext(Node * nextNode);
};

#endif
