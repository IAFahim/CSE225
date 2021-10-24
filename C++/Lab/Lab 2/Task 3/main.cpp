#include <bits/stdc++.h>
#include "dynarr.h"

void task_3() {
    int width, height;
    cin >> width >> height;
    dynarr a(width, height);
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            int val;
            cin >> val;
            a.setValue(x, y, val);
        }
    }
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            cout << a.getValue(x, y) << " ";
        }
    }
    a.~dynarr();
}

int main() {
    task_3();
}