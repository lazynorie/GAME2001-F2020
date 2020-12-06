#include <iostream>
#include "Queue.h"
#include "Deque.h"

using namespace std;

int main()
{
	cout << "Queue Data Structure Example " << endl << endl;

	//Create and populate our queue.
	const int Size = 5;
	Queue<int> intQueue(Size);
	for (int i = 0; i < Size; i++)
	{
		intQueue.push(10 + i);
	}
	cout << "Queue Contents(Size- " << intQueue.GetSize() << " ) :";
	while (intQueue.isEmpty()==false)
	{
		cout << " " << intQueue.front();
		intQueue.pop();
	}

	cout << endl << endl;

	if (intQueue.isEmpty()==true)
	{
		cout << " The int queue is empty" << endl << endl;
	}
	else
	{
		cout << " The int queue is not empty" << endl << endl;

	}
	//----------------------------------------------------------Deque 

	cout << "Queue Data Structure Example " << endl << endl;

	//Create and populate our queue.
	const int Size1 = 5;
	Deque<int> intDeque(Size1);
	for (int i = 0; i < Size1; i++)
	{
		intDeque.push_front(10 + i);
	}
	cout << "Queue Contents(Size- " << intDeque.GetSize() << " ) :";
	while (intDeque.isEmpty() == false)
	{
		cout << " Front: " << intDeque.front();
		cout << " Back: " << intDeque.back();
		cout << endl;
		intDeque.pop_front();
	}

	cout << endl << endl;

	if (intDeque.isEmpty() == true)
	{
		cout << " The int queue is empty" << endl << endl;
	}
	else
	{
		cout << " The int queue is not empty" << endl << endl;

	}


	return 0;

}