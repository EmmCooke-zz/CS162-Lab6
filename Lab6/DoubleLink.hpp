/*************************************************
* Author: Emmet Cooke
* Date: 10/31/2017
* Description:
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
	DoubleLink();
	~DoubleLink();

	void addHead();
	void addTail();
	void deleteHead();
	void deleteTail();
	void traverseReverse();
	void traverseForward();
};

#endif