#include <bits/stdc++.h>
#include "quetype.cpp"

using namespace std;

int task_1() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }

    int money;
    cin>>money;
    QueType<int>que;
    que.Enqueue(money);

    unordered_set<int> set;
    int turn=0,size=1;

    while (!que.IsEmpty()){
        int s=size;
        while (s--){
            int x;
            que.Dequeue(x);
            size--;
            if(x <= 0){
                return turn;
            }
            if(set.find(x) != set.end() || x < 0){
                continue;
            }
            set.insert(x);
            for (int i = 0; i < n; ++i) {
                que.Enqueue(x - arr[i]);
                size++;
            }
        }
        turn++;
    }
    return -1;
}


int main() {
    int n=3;
    for (int i = 0; i < n; ++i) {
        cout<<task_1()<<endl;
    }
    // for 3 2 3 5 200
    // we can take 40 note of 5
}