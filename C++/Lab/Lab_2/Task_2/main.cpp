#include <bits/stdc++.h>
#include "dynarr.h"

using namespace std;

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

int main() {
    task_2();
}