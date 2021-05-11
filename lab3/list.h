//---------------------------------------------------------------------------

#ifndef listH
#define listH
//---------------------------------------------------------------------------
template<typename T>
class List
{
public:
	List();
	~List();

	//удаление первого элемента в списке
	void pop_front();

	//добавление элемента в конец списка
	void Add(T data);

	// очистить список
	void clear();

	// получить количество елементов в списке
	int Count() { return Size; }

	// перегруженный оператор []
	T& operator[](const int index);

	//добавление элемента в начало списка
	void push_front(T data);

	//добавление элемента в список по указанному индексу
	void insert(T data, int index);

	//удаление элемента в списке по указанному индексу
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
