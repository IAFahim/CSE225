#include <bits/stdc++.h>
#include "sortedtype.cpp"
#include "timeStamp.h"

using namespace std;

template<class T>
void PRINT(SortedType<T> *linkedList, char endWith) {
    T next;
    for (int i = 0; i < linkedList->LengthIs(); ++i) {
        linkedList->GetNextItem(next);
        cout << next;
        if (i + 1 != linkedList->LengthIs()) {
            cout << endWith;
        }
    }
    if (endWith != '\n') {
        cout << endl;
    }
}

template<class T>
void SORT(SortedType<T> *A, SortedType<T> *B, SortedType<T> *stack) {
    int n1 = A->LengthIs(), n2 = B->LengthIs();
    T *crr = new T[n1 + n2];
    T *arr = new T[n1];
    T *brr = new T[n2];

    for (int i = n1 - 1; i > -1; --i) {
        A->GetNextItem(arr[i]);
    }

    for (int i = n2 - 1; i > -1; --i) {
        B->GetNextItem(brr[i]);
    }

    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr[i] < brr[j])
            crr[k++] = arr[i++];
        else
            crr[k++] = brr[j++];
    }

    while (i < n1)
        crr[k++] = arr[i++];
    while (j < n2)
        crr[k++] = brr[j++];

    for (int l = n1 + n2 - 1; l > -1; --l) {
        stack->InsertItem(crr[l]);
    }
}

template <class T>
void ADD(SortedType<T> * a, T * x){
    if (!a->IsFull()) {
        a->InsertItem(*x);
    }
}

int main() {
    SortedType<timeStamp> linkedList;

    timeStamp a(15, 34, 23);
    timeStamp b(13, 13, 02);
    timeStamp c(43, 45, 12);
    timeStamp d(25, 36, 17);
    timeStamp e(52, 02, 20);

    ADD(&linkedList, &a);
    ADD(&linkedList, &b);
    ADD(&linkedList, &c);
    ADD(&linkedList, &d);
    ADD(&linkedList, &e);

    linkedList.DeleteItem(d);

    PRINT(&linkedList, '\n');
}