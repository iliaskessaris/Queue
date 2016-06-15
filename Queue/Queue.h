#include <iostream>
#include <fstream>

using namespace std;
class Queue {
private:
	struct node {
		int data;
		node* next;
	};
	node* Head;
	node* Tail;

public:
	Queue();
	~Queue();
	void Front();
	void Back();
	void Empty();
	int Size();
	void Enqueue(int data);
	void Dequeue();
	void PrintQueue();
	void StoreToFile();
	void ReadFromFile();
};
