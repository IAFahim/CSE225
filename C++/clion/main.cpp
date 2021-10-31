#include <bits/stdc++.h>
#include "dynarr.cpp"
#include "complex.h"

using namespace std;

void task_1(){
    int n = 5;
    dynarr<double> d(n);
    for (int i = 0; i < n; ++i) {
        double x;
        cin >> x;
        d.setValue(i, x);
    }
    cout<<"double: ";
    for (int i = 0; i < n; ++i) {
        cout << d.getValue(i) << ", ";
    }
    cout<<endl;

    dynarr<int> in(n);
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        d.setValue(i, x);
    }
    cout<<"int: ";
    for (int i = 0; i < n; ++i) {
        cout << d.getValue(i) << ", ";
    }
}

void task_2(){
    cout<<"complex:"<<endl;
    Complex a(5, 3);
    Complex b(5, 5);
    Complex c = a * b;
    c.Print();
    cout << (a != b);
}

int main() {
    task_2();
    return 0;
}