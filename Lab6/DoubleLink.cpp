/*************************************************
* Author: Emmet Cooke
* Date: 10/31/2017
* Description: The file contains the definitions
* for the functions declared in the DoubleLink
* class.
*************************************************/
#include <iostream>
using std::cout;
using std::endl;

#include "DoubleLink.hpp"

/*************************************************
* Description: Default Constructor
*************************************************/
DoubleLink::DoubleLink()
{
	head = nullptr;
	tail = nullptr;
}

/*************************************************
* Description: Destructor
*************************************************/
DoubleLink::~DoubleLink()
{
	Node * currentNode = head;
	if (currentNode != nullptr)	// There exists a node
	{
		while (currentNode->getNext() != nullptr)
		{
			currentNode = currentNode->getNext();
			delete currentNode->getPrev();	// Deletes the previous node
		}
		delete currentNode; //clears the pointer
	}
}

/*************************************************
* Description: Function to add a node to the head
* of the linked list. Function #1.
*************************************************/
void DoubleLink::addHead(int numIn)
{
	if (head == nullptr)	// If head doesn't exist
	{
		head = new Node(numIn, head, head);	// New node
		tail = head;	// Tail points to same node
	}
	else
	{	// New node points to the previous head
		head->setPrev(new Node(numIn, nullptr, head));
		head = head->getPrev();	// Moves the head to the new node
	}
}

/*************************************************
* Description: Function to add a node to the tail
* of the linked list. Function #2.
*************************************************/
void DoubleLink::addTail(int numIn)
{
	if (tail == nullptr)	// If tail doesn't exist
	{
		tail = new Node(numIn, tail, tail);	// New Node
		head = tail;	// Head points to same node
	}
	else
	{	// New node points to the previous tail
		tail->setNext(new Node(numIn, tail, nullptr));
		tail = tail->getNext();	// Moves the tail to the new node
	}
}

/*************************************************
* Description: Function to remove a node from the 
* head of the linked list. Function #3. 
*************************************************/
void DoubleLink::deleteHead()
{
	Node * currentHead = head;

	if (head == nullptr) // If head doesn't exist
	{
		cout << "There is nothing to delete!" << endl;
	}
	else
	{
		if (head == tail)	// There is one node to delete
		{
			head = nullptr;
			tail = nullptr;
		}
		else	// Moves the head to the next node
		{		// and deletes the current head
			head = head->getNext();
			head->setPrev(nullptr);
		}
		delete currentHead;
	}
}

/*************************************************
* Description: Function to remove a node from the
* tail of the linked list. Function #4. 
*************************************************/
void DoubleLink::deleteTail()
{
	Node * currentTail = tail;

	if (tail == nullptr)	// If tail doesn't exist
	{
		cout << "There is nothing to delete!" << endl;
	}
	else
	{
		if (tail == head)	// There is one node to delete
		{
			tail = nullptr;
			head = nullptr;
		}
		else	// Moves the tail to the next node
		{		// and deletes the current tail
			tail = tail->getPrev();
			tail->setNext(nullptr);
		}
		delete currentTail;
	}
}

/*************************************************
* Description: Function to print the node values
* in reverse order. Function #5.
*************************************************/
void DoubleLink::printReverse()
{
	if (tail == nullptr)	// If tail doesn't exist
	{
		cout << "There is nothing to print!" << endl;
	}
	else
	{	// Recursively print values
		traverseReverse(tail);
	}
}

/*************************************************
* Description: Function to recursively print the node values
* in reverse order. Function #5. 
*************************************************/
void DoubleLink::traverseReverse(Node * tail)
{
	if (tail != nullptr)	// Recursively until nullptr
	{
		cout << tail->getNum() << "\t";
		traverseReverse(tail->getPrev());
	}
}

/*************************************************
* Description: Function to print the node values
* in reverse order. Function #5.
*************************************************/
void DoubleLink::printForward()
{
	if (head == nullptr)	// If head doesn't exist
	{
		cout << "There is nothing to print!" << endl;
	}
	else
	{	// Recursively print values
		traverseForward(head);
	}
}

/*************************************************
* Description: Functions to print the node values
* in order. Function #6.
*************************************************/
void DoubleLink::traverseForward(Node * head)
{
	if (head != nullptr)	// Recursively until nullptr
	{
		cout << head->getNum() << "\t";
		traverseForward(head->getNext());
	}
}

/*************************************************
* Description: Functions to print the head nodes
* value.
*************************************************/
void DoubleLink::printHead() const
{
	if (head != nullptr)	// If head exists
	{
		cout << "Head Value: " << head->getNum();
	}
}

/*************************************************
* Description: Functions to print the tail nodes
* value.
*************************************************/
void DoubleLink::printTail() const
{
	if (tail != nullptr)	// If tail exists
	{
		cout << "Tail Value: " << tail->getNum();
	}
}
