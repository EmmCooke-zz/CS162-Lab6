/*************************************************
* Author: Emmet Cooke
* Date: 10/31/2017
* Description: This is the header file for the
* DoubleLink class. It has two pointers to Node
* objects.
*************************************************/
#ifndef DOUBLE_LINK_HPP
#define DOUBLE_LINK_HPP

#include "Node.hpp"

class DoubleLink
{
private:
	Node * head;
	Node * tail;
public:
	// Default Constructor
	DoubleLink();
	// Destructor
	~DoubleLink();
	
	// Getters
	Node * getHead() const { return head; }
	Node * getTail() const { return tail; }

	// Functions to add nodes
	void addHead(int numIn);			// Function 1
	void addTail(int numIn);			// Function 2

	// Functions to remove nodes
	void deleteHead();		// Function 3
	void deleteTail();		// Function 4

	// Functions to call recursive functions
	void printReverse();	// Function 5
	void printForward();	// Function 6

	// Recursive Functions to print nodes
	void traverseReverse(Node * tail);	// Function 5
	void traverseForward(Node * head);	// Function 6

	// Functions to print head and tail
	void printHead() const;	// Extra Credit 1
	void printTail() const;	// Extra Credit 1
};

#endif