#include <bits/stdc++.h>
#include "pqtype.cpp"

using namespace std;

template<class T>
void IS_EMPTY(PQType<T> &pqType) {
    cout << (pqType.IsEmpty() ? "Queue is empty" : "Queue is not empty") << endl;
}

template<class T>
void INSERT(PQType<T> &pqType, T *arr, int size) {
    for (int i = 0; i < size; ++i) {
        pqType.Enqueue(arr[i]);
    }
}

template<class T>
void Print(PQType<T> &pqType) {
    int x;
    pqType.Dequeue(x);
    cout << x << endl;
}

void task_1() {
    PQType<int> pqType(15);

    IS_EMPTY(pqType);

    int arr[] = {4, 9, 2, 7, 3, 11, 17, 0, 5, 1};
    INSERT(pqType, arr, sizeof(arr) / sizeof(arr[0]));

    IS_EMPTY(pqType);

    Print(pqType);

    Print(pqType);
}

int main() {
    task_1();
}