#include <iostream>
#include "Queue.h"

using namespace std;

//Constructor of the class Queue.
Queue::Queue() {
	Head = Tail = NULL;
}

//Destructor of the class Queue.
Queue::~Queue() {
	while (Head != NULL) {
		Tail = Head;
		Head = Head->next;
		delete(Tail);
	}
}

//Displays the first element of the queue.
void Queue::Front() {
	if (Head != NULL) {
		cout << "\nThe first element in the queue is: " << Head->data << endl;
	}
	else {
		cout << "The list is empty.\n";
	}
}

//Displays the last element of the queue.
void Queue::Back() {
	if (Tail != NULL) {
		cout << "\nThe last element in the queue is: " << Tail->data << endl;
	}
	else {
		cout << "The list is empty.\n";
	}
}

//Checks whether or not the queue is empty and returns true or false respectively.
bool Queue::Emty() {
	if (Head == NULL) {
		return true;
	}
	else {
		return false;
	}
}

//Returns the number of nodes in the queue.
int Queue::Size() {
	node* Temp=Head;
	int size = 0;

	while (Temp != NULL) {
		Temp = Temp->next;
		size = size + 1;
	}
	return size;
}

//Adds a new element at the end of the queue.
void Queue::Enqueue(int data) {
	node* newdata = new node();
	newdata->data = data;
	newdata->next = NULL;

	if (Tail == NULL) {
		Head = Tail = newdata;
	} else {
		Tail->next = newdata;
		Tail = newdata;
	}
	cout << "The number added successfully.\n";
}

//Removes the fist item from the queue.
void Queue::Dequeue() {
	node* Temp;
	if (Head == NULL) {
		cout << "The list is empty.\n";
	} else {
		Temp = Head;
		Head = Head->next;
		delete(Temp);
		if (Head == NULL) {
			Tail = NULL;
		}
		cout << "The item successfully removed from the queue.\n";
	}
}

//Displays the numbers in the queue.
void Queue::PrintQueue() {
	node* Temp = Head;
	if(Temp !=NULL) {
		while (Temp != NULL) {
			cout << Temp->data << endl;
			Temp = Temp->next;
		}
	}
	else {
		cout << "The list is empty.\n";
	}
}