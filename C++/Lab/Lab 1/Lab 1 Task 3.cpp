#include <bits/stdc++.h>

using namespace std;

void task_3() {
    int height, width;
    cin >> height >> width;
    int **arr = new int *[height];
    int var[height];
    for (int y = 0; y < height; ++y) {
        cin >> var[y];
        arr[y] = new int[var[y]];
        for (int x = 0; x < var[y]; ++x) {
            cin >> arr[y][x];
        }
    }
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < var[y]; ++x) {
            cout << arr[y][x] << " ";
        }
        cout<<endl;
    }
    delete[] arr;
}


int main() {
    task_3();
}