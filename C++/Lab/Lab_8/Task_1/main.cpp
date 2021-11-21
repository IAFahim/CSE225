#include <bits/stdc++.h>
#include "stacktype.cpp"

using namespace std;

template<class T>
void IS_FULL(StackType<T> *stack) {
    if (stack->IsFull()) {
        cout << "Stack is full" << endl;
    } else {
        cout << "Stack is not Empty" << endl;
    }
}

template<class T>
void IS_EMPTY(StackType<T> *stack) {
    if (stack->IsEmpty()) {
        cout << "Stack is Empty" << endl;
    } else {
        cout << "Stack is not Empty" << endl;
    }
}

template<class T>
void PRINT(StackType<T> *stack, char endWith) {
    StackType<T> tempStack;
    while (!stack->IsEmpty()) {
        tempStack.Push(stack->Top());
        stack->Pop();
    }
    while (!tempStack.IsEmpty()) {
        T x = tempStack.Top();
        cout << x << endWith;
        stack->Push(x);
        tempStack.Pop();
    }
    if (endWith != '\n') {
        cout << endl;
    }
}

void task_1() {
    StackType<int> stack;

    IS_EMPTY(&stack);

    stack.Push(5);
    stack.Push(7);
    stack.Push(4);
    stack.Push(2);

    IS_EMPTY(&stack);

    IS_FULL(&stack);

    PRINT(&stack, ' ');

    stack.Push(3);

    PRINT(&stack, ' ');

    IS_FULL(&stack);

    stack.Pop();
    stack.Pop();

    cout << stack.Top() << endl;
}

int main() {
    task_1();
}