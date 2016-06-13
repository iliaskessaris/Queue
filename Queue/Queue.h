#include <iostream>

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
	bool Emty();
	int Size();
	void Push();
	void Pop();
	void PrintQueue();
};
