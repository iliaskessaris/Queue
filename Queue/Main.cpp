#include <iostream>

#include "Queue.h"

void menu() {
	cout << "\nTo check if the queue is empty press 1.\n";
	cout << "To check the size of the queue press 2.\n";
	cout << "To check the front number of the queue press 3.\n";
	cout << "To check the back number of the queue press 4.\n";
	cout << "To print the queue press 5.\n";
	cout << "To add a number in the queue press 6\n";
	cout << "To remove the first number from the queue press 7.\n";
	cout << "To exit any other charachter\n";
}
using namespace std;
void main() {
	Queue* newqueue = new Queue();
	char choice;
	int data;

	newqueue->ReadFromFile();
	menu();
	cin >> choice;
	while (choice == '1' || choice == '2' || choice == '3' || choice == '4' || choice == '5' || choice == '6' || choice == '7') {
		switch (choice) {
		case '1':
			newqueue->Empty();
			break;
		case '2':
			cout << newqueue->Size() << endl;
			break;
		case '3':
			newqueue->Front();
			break;
		case '4':
			newqueue->Back();
			break;
		case '5':
			newqueue->PrintQueue();
			break;
		case '6':
			cout << "\nType the number to insert\n";
			cin >> data;
			newqueue->Enqueue(data);
			break;
		case '7':
			newqueue->Dequeue();
			break;
		deafault:
			break;
		}
		menu();
		cin >> choice;
	}
	newqueue->StoreToFile();
	system("Pause");
}