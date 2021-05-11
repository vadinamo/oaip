//---------------------------------------------------------------------------

#pragma hdrstop

#include "list.h"
#include "Bus.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

template<typename T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}


template<typename T>
List<T>::~List()
{
	clear();
}


template<typename T>
void List<T>::pop_front()
{
	Node<T> *temp = head;

	head = head->pNext;

	delete temp;

	Size--;

}

template<typename T>
void List<T>::Add(T data)
{
	if (head == nullptr)
	{
		head = new Node<T>(data);
	}
	else
	{
		Node<T> *current = this->head;

		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);

	}

	Size++;
}

template<typename T>
void List<T>::clear()
{
	while (Size)
	{
		pop_front();
	}
}


template<typename T>
T & List<T>::operator[](const int index)
{
	int counter = 0;

	Node<T> *current = this->head;

	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}

template<typename T>
void List<T>::push_front(T data)
{
	head = new Node<T>(data, head);
	Size++;
}

template<typename T>
void List<T>::insert(T data, int index)
{

	if (index == 0)
	{
		push_front(data);
	}
	else
	{
		Node<T> *previous = this->head;

		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}

		Node<T> *newNode = new Node<T>(data, previous->pNext);

		previous->pNext = newNode;

		Size++;
	}
}

template<typename T>
void List<T>::Delete(int index)
{
	if (index == 0)
	{
		pop_front();
	}
	else
	{
		Node<T> *previous = this->head;
		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}


		Node<T> *toDelete = previous->pNext;

		previous->pNext = toDelete->pNext;

		delete toDelete;

		Size--;
	}

}

template<typename T>
void List<T>::Display(TMemo *Memo) {

	if(Size != 0) {
		Node<T> *current = new Node<T>;
		current = head;
		while(current != nullptr) {

			Memo -> Lines -> Add("№" + IntToStr(current -> data.getNumber()));
			Memo -> Lines -> Add("Тип автобуса: " + current -> data.getBusType());

			String buffer = "";
			if((current -> data.getDepartureTime() % 60) < 10) buffer = "0";
			Memo -> Lines -> Add("Время отправления: " + IntToStr(current -> data.getDepartureTime() / 60) + ":" + buffer + IntToStr(current -> data.getDepartureTime() % 60));

			buffer = "";
			if((current -> data.getArrivalTime() % 60) < 10) buffer = "0";
			Memo -> Lines -> Add("Время прибытия: " + IntToStr(current -> data.getArrivalTime() / 60) + ":" + buffer + IntToStr(current -> data.getArrivalTime() % 60));
			Memo -> Lines -> Add("Пункт назначения: " + current -> data.getDestination());
			Memo -> Lines -> Add("");
			current = current -> pNext;
		}
	}

	else {
		Memo -> Lines -> Add("Нет введенных автобусов.");
	}
}

template<typename T>
void List<T>::Search(TMemo *Memo, String dest, int time) {
	if(Size != 0) {
		Node<T> *current = new Node<T>;
		current = head;
		while(current != nullptr) {
			switch(time) {
				case -1:
					if(current -> data.getDestination() == dest) {
						String buffer = "";
						if((current -> data.getArrivalTime() % 60) < 10) buffer = "0";
						Memo -> Lines -> Add("№" + IntToStr(current -> data.getNumber()) + ", " +
											IntToStr(current -> data.getArrivalTime() / 60) +
											":" + buffer + IntToStr(current -> data.getArrivalTime() % 60));
					}
					break;

				default:
					if(current -> data.getDestination() == dest && current -> data.getArrivalTime() <= time) {
						String buffer = "";
						if((current -> data.getArrivalTime() % 60) < 10) buffer = "0";
						Memo -> Lines -> Add("№" + IntToStr(current -> data.getNumber()) + ", " +
											IntToStr(current -> data.getArrivalTime() / 60) +
											":" + buffer + IntToStr(current -> data.getArrivalTime() % 60));
					}
					break;
			}

			current = current -> pNext;
		}
	}

	else {
		Memo -> Lines -> Add("Нет введенных автобусов.");
	}
}

template<typename T>
int List<T>::SearchByNumber(int number) {
	if(Size != 0) {
		int index = 0;
		Node<T> *current = new Node<T>;
		current = head;
		while(current != nullptr) {
			if(current -> data.getNumber() == number) {
				return index;
			}

			current = current -> pNext;
			index++;
		}
	}

	return -1;
}
template class List<Bus>;
