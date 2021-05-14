#include "Stack.h"

template<typename T>
Stack<T>::Stack(int size) {
    words = new T[size];
    capacity = size;
    top = -1;
}

template<typename T>
Stack<T>::~Stack<T>() {
    delete[] words;
}

template<typename T>
void Stack<T>::push(T word) {
    if(!isFull()) {
        words[++top] = word;
    }
}

template<typename T>
T Stack<T>::pop() {
    if(!isEmpty()) {
        return words[top--];
    }
}

template<typename T>
T Stack<T>::peek() {
    if(!isEmpty()) {
        return words[top];
    }
}

template<typename T>
int Stack<T>::size() {
    return top + 1;
}

template<typename T>
bool Stack<T>::isEmpty() {
    return top == -1;
}

template<typename T>
bool Stack<T>::isFull() {
    return top == capacity - 1;
}
