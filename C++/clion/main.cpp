#include <bits/stdc++.h>
#include "dynarr.h"

using namespace std;

void task_1() {
    int n = 5;
    dynarr a;
    dynarr b(n);
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        b.setValue(i, x);
    }
    for (int i = 0; i < n; ++i) {
        cout << b.getValue(i) << " ";
    }
    a.~dynarr();
}

void task_2() {
    int n = 5;
    dynarr a;
    a.allocate(n);
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        a.setValue(i, x);
    }
    a.~dynarr();
}

void task_3() {
    int width, height;
    cin >> width >> height;
    dynarr a(width, height);
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            int val;
            cin >>val;
            a.setValue(x,y,val);
        }
    }
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            cout<<a.getValue(x,y)<<" ";
        }
    }
    a.~dynarr();
}

int main() {
    freopen(R"(C:\Users\Fahim\GolandProjects\CSE225\C++\clion\input.txt)", "r", stdin);
    task_3();
}