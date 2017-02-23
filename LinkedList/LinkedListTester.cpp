/*
 * LinkedListTester.cpp
 *
 *  Created on: Feb 22, 2017
 *      Author: sfukuzawa14
 */

#include "LinkedListTester.h"
#include <iostream>
#include <cassert>
using namespace std;

void LinkedListTester::runTests() {
	// TODO Auto-generated constructor stub
	cout << "Running tests for LinkedLists..." << endl;
	testConstructors();

	cout << "All tests passed!!! " << endl;
}

void LinkedListTester::testConstructors() {
	cout << "Testing constructors... " << flush;

	LinkedList<int> ll0;
	assert( ll0.size == 0 );
	assert( ll0.head == NULL );
	cout << " 0 " << flush;

	LinkedList<int> ll1(5);
	assert( ll1.size == 1 );
	assert( ll1.head->data == 5 );
	cout << " 1 " << flush;

	cout << " Passed!" << endl;
}
