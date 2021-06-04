//---------------------------------------------------------------------------

#ifndef listH
#define listH
#include "vcl.h"
//---------------------------------------------------------------------------
template<typename T>
class List
{
public:
	List();
	~List();

	void pop_front();

	void Add(T data);

	int Count() { return Size; }

	T& operator[](const int index);

	void push_front(T data);

	void Delete(int index);

	void Display(TMemo *Memo);

	void Search(TMemo *Memo, String dest, int time);

	int SearchByNumber(int number);

private:
	template<typename Type>
	class Node
	{
	public:
		Node * pNext;
		Type data;

		Node(Type data = Type(), Node *pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};
	int Size;
	Node<T> *head;
};
#endif
