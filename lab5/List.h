//---------------------------------------------------------------------------

#ifndef listH
#define listH
//---------------------------------------------------------------------------

template<typename T>
struct Node
 {
	 T data;
	 Node *next,*prev;
 };

template<typename T>
class List
{
	public:
		Node<T> *head,*tail;
		int Size;
		List() {
			head = NULL;
			tail = NULL;
			Size = 0;
		}

		~List();
		void print(TListBox *ListBox);
		void insert(T data);
		int Count() {
			return Size;
		}

		Node<T> getHead() {
			return *head;
		}

		Node<T> getTail() {
			return *tail;
		}

		void remove(int index);
};


#endif
