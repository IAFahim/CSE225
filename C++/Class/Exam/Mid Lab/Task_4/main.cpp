#include <bits/stdc++.h>

using namespace std;

bool findElement(int a, int arr[], int len) {// size of array isn't passed in, had no return type. fixed here
    for (int i = 0; i < len; ++i) {// for loop didn't have proper structure. fixed here
        if (a == arr[i]) {//used assign operator instead of comparison operator. fixed her
            return true;// found wasn't assigned. fixed here
        }
    }
    cout << "not found";// IOStream operator wasn't given properly, had no piper declaration of string. fixed here
    return false;//had no rerun type fixed here. fixed here
}

void Question_4() {
    int arr[] = {2, 3, 5};
    findElement(0, arr, 3);
}

int main() {
    Question_4();
}