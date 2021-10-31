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

int main() {
    task_1();
}