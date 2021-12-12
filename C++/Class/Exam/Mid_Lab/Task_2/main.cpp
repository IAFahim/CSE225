#include <bits/stdc++.h>
#include "quetype.cpp"

using namespace std;

void Question_2() {
    QueType<int> arr;
    arr.Enqueue(16);
    arr.Enqueue(3);
    arr.Enqueue(9);
    arr.Enqueue(7);
    arr.Enqueue(11);
    arr.Enqueue(10);

    QueType<int> brr;
    brr.Enqueue(9);
    brr.Enqueue(15);
    brr.Enqueue(17);
    brr.Enqueue(3);
    brr.Enqueue(8);
    brr.Enqueue(0);

    int a = 6, b = 6;
    int n = min(a, b);
    int tmp[n];
    for (int i = 0; i < n; ++i) {
        arr.Dequeue(a);
        brr.Dequeue(b);
        tmp[i] = a + b;
    }

    QueType<int> crr;
    for (int i = 0; i < n; ++i) {
        crr.Enqueue(tmp[i]);
        cout << tmp[i] << endl;
    }
}

int main() {
    Question_2();
}