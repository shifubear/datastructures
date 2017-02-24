/*
 * LinkedList.h
 *
 *  Created on: Feb 22, 2017
 *      Author: sfukuzawa14
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <iostream>

template <class DataType>
class LinkedList {

public:
	LinkedList();
	LinkedList(DataType data);
	~LinkedList();

private:
	struct SLLNode {
		DataType data;
		SLLNode* next;
	};

	SLLNode* head;
	unsigned size;

	friend class LinkedListTester;
};

template <typename T>
LinkedList<T>::LinkedList() {
	// TODO Auto-generated constructor stub
	size = 0;
	head = NULL;
}

template <typename T>
LinkedList<T>::LinkedList(T data) {
	size = 1;
	SLLNode* newNode = new SLLNode;
	newNode->data = data;
	head = newNode;
}

template <typename T>
LinkedList<T>::~LinkedList() {
	// TODO Auto-generated destructor stub
	delete head;
}


#endif /* LINKEDLIST_H_ */
