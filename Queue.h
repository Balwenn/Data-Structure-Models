#ifndef QUEUE_H_
#define QUEUE_H_

#include "Node.h"

class Queue:public Node{
private:
	nodePtr head;
	nodePtr curr;
	nodePtr temp;
public:
	Queue();
	void enqueue(int addData);
	void dequeue(int delData);
	void PrintFirstData();
	void PrintQueue();
	void IsEmpty();
	~Queue();
};

#endif