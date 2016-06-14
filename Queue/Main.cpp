#include <iostream>

#include "Queue.h"


using namespace std;
void main() {
	Queue* newqueue = new Queue();
	newqueue->Enqueue(5);
	newqueue->Enqueue(7);
	newqueue->Enqueue(2);
	newqueue->Enqueue(8);
	newqueue->PrintQueue();
	cout<<"The size of the queue is: "<< newqueue->Size();
	newqueue->Front();
	newqueue->Back();
	newqueue->Dequeue();
	newqueue->PrintQueue();
	system("Pause");
}