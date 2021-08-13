#ifndef NODE_H_
#define NODE_H_
#include <iostream>

class Node {
public:

	typedef struct node {
		int data;
		node* next;
	}*nodePtr;
};

#endif
