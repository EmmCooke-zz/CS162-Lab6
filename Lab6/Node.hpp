/*************************************************
* Author: Emmet Cooke
* Date: 10/31/2017
* Description:
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
	Node();
	~Node();

	// Getters
	int getNum() const;
	Node * getPrev() const;
	Node * getNext() const;
	
	// Setters
	void setNum();
	void setPrev();
	void setNext();
};

#endif
