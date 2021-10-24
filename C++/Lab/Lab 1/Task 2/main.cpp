#include <bits/stdc++.h>

using namespace std;

void task_2() {
    int height, width;
    cin >> height >> width;
    char **arr = new char *[height];
    for (int y = 0; y < height; ++y) {
        arr[y] = new char[width];
        for (int x = 0; x < width; ++x) {
            cin >> arr[y][x];
        }
    }
    for (int y = 0; y < height; ++y) {
        cout << arr[y] << endl;
    }
    delete[] arr;
}


int main() {
    task_2();
}