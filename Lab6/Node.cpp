/*************************************************
* Author: Emmet Cooke
* Date: 10/31/2017
* Description: This file houses the definitions
* for the functions of the Node class. 
*************************************************/
#include "Node.hpp"

/*************************************************
* Description: Default Constructor.
*************************************************/
Node::Node()
{
	setNum(0);
	prev = nullptr;
	next = nullptr;
}

/*************************************************
* Description: Constructor that takes in an int
* and two nodes.
*************************************************/
Node::Node(int numIn, Node * prev, Node * next)
{
	setNum(numIn);
	setPrev(prev);
	setNext(next);
}

/*************************************************
* Description: Destructor. Frees memory held by prev
* and next.
*************************************************/
Node::~Node()
{
}

/*************************************************
* Description: Sets num equal to the number passed
* in.
*************************************************/
void Node::setNum(int numIn)
{
	num = numIn;
}

/*************************************************
* Description: Sets the next pointer to the Node
* passed in.
*************************************************/
void Node::setNext(Node* nextNode)
{
	next = nextNode;
}

/*************************************************
* Description: Sets the prev pointer to the Node
* passed in.
*************************************************/
void Node::setPrev(Node* prevNode)
{
	prev = prevNode;
}
