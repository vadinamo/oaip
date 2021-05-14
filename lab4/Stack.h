#ifndef LAB5_STACK_H
#define LAB5_STACK_H

template<typename T>
class Stack {
    public:
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

#endif //LAB5_STACK_H
