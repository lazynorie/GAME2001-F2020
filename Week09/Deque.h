#pragma once

#include "DoublyLinkedList.h"

template<class T>
class Deque
{
public:
	Deque(int size)
	{
		assert(size > 0);
		m_size = size;
	}
	~Deque() {} // Because of the nature of link list we dont have to do this 
	// -------------QUEUE FUNCTIONS ---------------------
	void push_front(T val)
	{
		if (m_elements.GetSize()<m_size)
		{
			m_elements.Push_Front(val);
		}
	}
	void pop_front() //remove the Queue front not the linkedlist root
	{
		m_elements.Pop();
	}

	void push_back(T val)
	{
		if (m_elements.GetSize()<m_size)
		{
			m_elements.Push();
		}
	}
	void pop_back()
	{
		m_elements.Pop_Front();
	}
	
	T& front()//giving access to the root of the list
	{
		LinkIterator<T> it;
		it = m_elements.Begin();

		return *it;
	}
	T& back()
	{
		LinkIterator<T> it;
		it = m_elements.Last();

		return *it;
	}
	int GetSize()
	{
		return m_elements.GetSize();
	}
	int GetMaxSize()
	{
		return m_size;
	}
	bool isEmpty()
	{
		return(m_elements.GetSize() == 0);
	}

	void Resize(int size)
	{
		assert(size > 0);
		m_size = size;
	}
private:
	LinkedList<T> m_elements;
	int m_size;
};