#include <bits/stdc++.h>
#include "unsortedtype.cpp"

using namespace std;

template<class T>
void PRINT(UnsortedType<T> *stack, char endWith) {
    T next;
    for (int i = 0; i < stack->LengthIs(); ++i) {
        stack->GetNextItem(next);
        cout << next;
        if (i + 1 != stack->LengthIs()) {
            cout << endWith;
        }
    }
    if (endWith != '\n') {
        cout << endl;
    }
}

template<class T>
void SORT(UnsortedType<T> *A, UnsortedType<T> *B, UnsortedType<T> *stack) {
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

int main() {
    UnsortedType<int> a;
    int t = 2;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (!a.IsFull()) {
            a.InsertItem(x);
        }
    }

    UnsortedType<int> b;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (!b.IsFull()) {
            b.InsertItem(x);
        }
    }

    UnsortedType<int> merged;
    SORT(&a, &b, &merged);

    PRINT(&merged,' ');
}