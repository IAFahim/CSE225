#include <bits/stdc++.h>
#include "quetype.cpp"

using namespace std;

template<class T>
void IS_FULL(QueType<T> *queue) {
    if (queue->IsFull()) {
        cout << "Queue is full" << endl;
    } else {
        cout << "Queue is not Empty" << endl;
    }
}

template<class T>
void IS_EMPTY(QueType<T> *stack) {
    if (stack->IsEmpty()) {
        cout << "Queue is Empty" << endl;
    } else {
        cout << "Queue is not Empty" << endl;
    }
}

template<class T>
void PRINT(QueType<T> *queue, int size, char endWith) {
    QueType<T> tempQueue(size);
    while (!queue->IsEmpty()) {
        T x;
        queue->Dequeue(x);
        cout << x << endWith;
        tempQueue.Enqueue(x);
    }

    while (!tempQueue.IsEmpty()) {
        T x;
        tempQueue.Dequeue(x);
        queue->Enqueue(x);
    }

    if (endWith != '\n') {
        cout << endl;
    }
}

template<class T>
void ADD(QueType<T> *queue, T x) {
    try {
        queue->Enqueue(x);
    } catch (...) {
        cout << "Queue Overflow" << endl;
    }
}

template<class T>
T REMOVE(QueType<T> *queue) {
    T x;
    try {
        queue->Dequeue(x);
    } catch (...) {
        cout << "Queue Underflow" << endl;
    }
    return x;
}

void task_1() {
    QueType<int> queue(5);

    IS_EMPTY(&queue);

    ADD(&queue, 5);
    ADD(&queue, 7);
    ADD(&queue, 4);
    ADD(&queue, 2);

    IS_EMPTY(&queue);

    IS_FULL(&queue);

    ADD(&queue, 6);

    PRINT(&queue, 5, ' ');

    IS_FULL(&queue);

    REMOVE(&queue);
    REMOVE(&queue);

    PRINT(&queue, 3, ' ');

    REMOVE(&queue);
    REMOVE(&queue);
    REMOVE(&queue);

    IS_EMPTY(&queue);

    REMOVE(&queue);
}

int main() {
    task_1();
}