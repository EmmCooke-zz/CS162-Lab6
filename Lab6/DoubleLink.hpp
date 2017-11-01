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

	// Functions to add nodes
	void addHead();			// Function 1
	void addTail();			// Function 2

	// Functions to remove nodes
	void deleteHead();		// Function 3
	void deleteTail();		// Function 4

	// Functions to print nodes
	void traverseReverse();	// Function 5
	void traverseForward();	// Function 6
};

#endif