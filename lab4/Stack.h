//---------------------------------------------------------------------------

#ifndef StackH
#define StackH
//---------------------------------------------------------------------------
template<typename T>
class Stack {
    private:
        T *words;
        int top;
        int capacity;

    public:
        Stack(int size);
        ~Stack();
        void push(T);
        T pop();
        T peek();
        int size();
        bool isFull();
        bool isEmpty();
};
#endif
