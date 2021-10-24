#include <bits/stdc++.h>

using namespace std;

void task_1() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << (i + 1 != n ? ", " : "\n");
    }
    delete[] arr;
}


int main() {
    task_1();
}