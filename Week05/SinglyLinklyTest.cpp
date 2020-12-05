#include<iostream>
#include "SinglyLinkedList.h"

using namespace std;

int main()
{
	cout << "singly Linked list Example" << endl << endl;

	LinkedList<int> lList;

	lList.Push(101);
	lList.Push(11);
	lList.Pop();
	lList.Push(201);
	lList.Push(301);
	lList.Push(401);
	lList.Push(1);
	lList.Pop();
	lList.Push(701);

	LinkIterator<int> it;

	for (it = lList.Begin(); it != lList.End();it++)
	{
		cout << " " << *it;
	}

	cout << endl << endl;

	return 0;
}