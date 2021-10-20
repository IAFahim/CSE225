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
    freopen(R"(C:\Users\Fahim\GolandProjects\CSE225\C++\clion\input.txt)", "r", stdin);
//    task_1();
    task_3();

}



