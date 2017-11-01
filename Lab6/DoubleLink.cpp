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
	if (currentNode != nullptr)
	{
		while (currentNode->getNext() != nullptr)
		{
			currentNode = currentNode->getNext();
			delete currentNode->getPrev();
		}
		delete currentNode;
	}
}

/*************************************************
* Description: Function to add a node to the head
* of the linked list. Function #1.
*************************************************/
void DoubleLink::addHead(int numIn)
{
	if (head == nullptr)
	{
		head = new Node(numIn, head, head);
		tail = head;
	}
	else
	{
		head->setPrev(new Node(numIn, nullptr, head));
		head = head->getPrev();
	}
}

/*************************************************
* Description: Function to add a node to the tail
* of the linked list. Function #2.
*************************************************/
void DoubleLink::addTail(int numIn)
{
	if (tail == nullptr)
	{
		tail = new Node(numIn, tail, tail);
		head = tail;
	}
	else
	{
		tail->setNext(new Node(numIn, tail, nullptr));
		tail = tail->getNext();
	}
}

/*************************************************
* Description: Function to remove a node from the 
* head of the linked list. Function #3. 
*************************************************/
void DoubleLink::deleteHead()
{
	Node * currentHead = head;

	if (head == nullptr)
	{
		cout << "There is nothing to delete!" << endl;
	}
	else
	{
		if (head == tail)
		{
			head = nullptr;
			tail = nullptr;
		}
		else
		{
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

	if (tail == nullptr)
	{
		cout << "There is nothing to delete!" << endl;
	}
	else
	{
		if (tail == head)
		{
			tail = nullptr;
			head = nullptr;
		}
		else
		{
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
	if (tail == nullptr)
	{
		cout << "There is nothing to print!" << endl;
	}
	else
	{
		traverseReverse(tail);
	}
}

/*************************************************
* Description: Function to recursively print the node values
* in reverse order. Function #5. 
*************************************************/
void DoubleLink::traverseReverse(Node * tail)
{
	if (tail != nullptr)
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
	if (head == nullptr)
	{
		cout << "There is nothing to print!" << endl;
	}
	else
	{
		traverseForward(head);
	}
}

/*************************************************
* Description: Functions to print the node values
* in order. Function #6.
*************************************************/
void DoubleLink::traverseForward(Node * head)
{
	if (head != nullptr)
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
	if (head != nullptr)
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
	if (tail != nullptr)
	{
		cout << "Tail Value: " << tail->getNum();
	}
}
