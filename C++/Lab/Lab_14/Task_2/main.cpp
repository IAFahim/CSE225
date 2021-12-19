#include <bits/stdc++.h>
#include "pqtype.cpp"

using namespace std;

void task_2() {
    int n, k;
    cin >> n >> k;
    PQType<int> pqType(n);
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        pqType.Enqueue(x);
    }
    int candies = 0;
    for (int i = 0; i < k; ++i) {
        int x;
        pqType.Dequeue(x);
        candies += x;
        pqType.Enqueue(x / 2);
    }
    cout << candies << endl;
}

int main() {
    task_2();
}