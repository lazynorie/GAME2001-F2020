#include <iostream>
#include "Queue.h"

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



	return 0;

}