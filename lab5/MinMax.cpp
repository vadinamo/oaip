//---------------------------------------------------------------------------

#pragma hdrstop

#include "MinMax.h"

template<typename T>
void MinMax<T>::swap() {
	Node<T> *min = this -> head;
	Node<T> *max = this -> head;
	Node<T> *cur = this -> head -> next;

	while(cur != NULL)
    {
		if(cur->data < min->data)
        {
            min = cur;
		} else if(cur->data > max->data)
		{
			max = cur;
		}
		cur = cur->next;
	}

	Node<T> *prevMin = min -> prev;
	Node<T> *nextMin = min -> next;

	Node<T> *prevMax = max -> prev;
	Node<T> *nextMax = max -> next;

	if (prevMin != NULL)
		prevMin -> next = max;

	if (nextMin != NULL)
		nextMin -> prev = max;

	if (prevMax != NULL)
		prevMax -> next = min;

	if (nextMax != NULL)
		nextMax -> prev = min;

	min -> prev = prevMax;
	min -> next = nextMax;

	max -> prev = prevMin;
	max -> next = nextMin;

	if (max -> next == NULL)
		this -> tail = max;

	else if (min -> next == NULL)
		this -> tail = min;

	if (max -> prev == NULL)
		this -> head = max;

	else if (min -> prev == NULL)
		this -> head = min;
}
template class MinMax<int>;

//---------------------------------------------------------------------------
#pragma package(smart_init)
