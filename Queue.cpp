#include <cstdlib>
#include <iostream>
#include <conio.h>
#include "Queue.h"
#include "Node.h"

using namespace std;

Queue::Queue(){
	head = NULL;
	curr = NULL;
	temp = NULL;
}

void Queue::enqueue(int addData) {
	nodePtr node_n = new node;
	node_n->next = NULL;
	node_n->data = addData;

	if (head != NULL) {
		curr = head;
		while (curr->next != NULL) {
			curr = curr->next;
		}
		curr->next = node_n;
	}
	else {
		head = node_n;
	}
	cout << "Number " << addData << " is inserted" << endl << endl;
}

void Queue::dequeue(int delData) {
	nodePtr delPtr = NULL;
	temp = head;
	curr = head;
	while (curr != NULL && curr->data != delData) {
		temp = curr;
		curr = curr->next;
	}

	if (curr == NULL) {
		cout << delData << " is not in the list" << endl << endl;
		delete delPtr; //just delete to make sure it does not float
	}
	else
	{
		delPtr = curr;
		curr = curr->next;
		temp->next = curr;
		if (delPtr == head) {
			head = head->next;
			temp = NULL;
		}
		delete delPtr;
		cout << delData << " has been deleted" << endl << endl;
	}
}

void Queue::PrintQueue() {
	curr = head;
	cout << "Current data in the list is -> ";
	while (curr != NULL) {
		cout << curr->data;
		if (curr->next != NULL)
			cout << ",";
		curr = curr->next;
	}
	cout << endl << endl;
	IsEmpty();
}

void Queue::PrintFirstData() {
	curr = head;
	cout << "First data of LL is -> " << curr->data << endl << endl;
	IsEmpty();
}

void Queue::IsEmpty() {
	if (head == NULL)
		cout << "This queue is empty." << endl << endl;
}

Queue::~Queue() {
	delete head;
	delete curr;
	delete temp;
};
