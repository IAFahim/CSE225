#include <bits/stdc++.h>
#include "dynarr.h"
#include "dynarr.cpp"

using namespace std;

int main() {
    int n = 5;
    dynarr<string> d(n);
    for (int i = 0; i < n; ++i) {
        string x;
        cin >> x;
        d.setValue(i, x);
    }
    for (int i = 0; i < n; ++i) {
        cout << d.getValue(i) << ", ";
    }
    return 0;
}