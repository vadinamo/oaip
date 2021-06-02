//---------------------------------------------------------------------------

#pragma hdrstop

#include "List.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
template<typename T>
List<T>::~List()
{
	while (head)
	 {
		 tail=head->next;
		 delete head;
		 head=tail;
	 }
}

template<typename T>
void List<T>::insert(T data) {
	Node<T> *temp = new Node<T>;
	temp -> next = NULL;
	temp -> data = data;

	if (head != NULL) {
		temp -> prev = tail;
		tail -> next = temp;
		tail = temp;
	}

	else {
	   temp -> prev = NULL;
	   head = tail = temp;
	}

	Size++;
}

template <typename T>
void List<T>::print(TListBox *ListBox) {
	Node<T> *temp=head;

	 while (temp!=NULL)
	 {
		ListBox -> Items -> Add(temp -> data);
		temp = temp -> next;
	 }
}

template <typename T>
void List<T>::remove(int index) {


	Node<T> *previous = this->head;
	for (int i = 0; i < index - 1; i++)
	{
		previous = previous -> next;
	}

	if(previous != this -> head) {
		Node<T> *toDelete = previous->next;

		previous -> next = toDelete -> next;
		previous -> prev = toDelete -> prev;

		delete toDelete;

		Size--;
	}

	else {
        Node<T> *temp = head;

		head = head->next;

		delete temp;

		Size--;
    }


}
template class List<int>;
