#include <bits/stdc++.h>
#include "dynarr.h"

int main() {
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