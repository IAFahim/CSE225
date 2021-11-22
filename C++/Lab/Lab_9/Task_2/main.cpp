#include <bits/stdc++.h>
#include "quetype.cpp"

using namespace std;

void task_2() {
    int n;
    cin >> n;
    QueType<string> queue(n + 1);
    queue.Enqueue("1");
    for (int i = 1; i <= n; ++i) {
        string old;
        queue.Dequeue(old);
        cout << old << endl;
        string now = old;
        queue.Enqueue(old.append("0"));
        queue.Enqueue(now.append("1"));
    }
}

int main() {
    task_2();
}