#pragma once


template <typename T>
class PriorityQueue
{
	LinkedList<T> patients_;


	typename LinkedList<T>::Node* ptr;

public:
	PriorityQueue()
	{
		ptr = new typename LinkedList<T>::Node();
	}
};
