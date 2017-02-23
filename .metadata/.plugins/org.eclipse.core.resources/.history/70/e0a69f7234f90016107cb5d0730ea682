/*
 * main.cpp
 *
 *  Created on: Feb 22, 2017
 *      Author: sfukuzawa14
 */

#include <iostream>
using namespace std;

template <typename DataType>
struct SLLNode {
	DataType data;
	SLLNode* next;
};

int main() {

	SLLNode<int>* head = NULL;
	SLLNode<int>* copy = NULL;

	int n = 0;
	cout << "Please input a value to add to the list: " << flush;
	cin >> n;
	SLLNode<int>* newNode1 = new SLLNode<int>;
	newNode1->data = n;
	newNode1->next = NULL;
	head = newNode1;
	copy = head;
	while (true) {
		cout << "Please input a value to add to the list: " << flush;
		cin >> n;
		if (n == -1)
			break;
		SLLNode<int>* newNode = new SLLNode<int>;
		newNode->data = n;
		newNode->next = NULL;
		head->next = newNode;
		head = head->next;
	}

	cout << "Here is the list: " << endl << "->" << flush;
	while (copy != NULL) {
		cout << copy->data << " " << flush;
		copy = copy->next;
	}
	cout << "Hello world" << endl;
}



