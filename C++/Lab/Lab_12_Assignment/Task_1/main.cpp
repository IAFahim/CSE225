#include <bits/stdc++.h>

using namespace std;

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int left = fib(n - 1);
    int right = fib(n - 2);
    return right + left;
}

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int sumOfDigits(int x) {
    if (x == 0) return 0;
    return x % 10 + sumOfDigits(x / 10);
}

int findMin(int a[], int size) {
    if (size == 1)return a[size - 1];
    return min(a[size - 1], findMin(a, size - 1));
}

int DecToBin(int dec) {
    if (dec == 0)return 0;
    int mod = dec % 2;
    int dev = dec / 2;
    return mod + DecToBin(dev) * 10;
}

double series(int n) {
    if (n == 0)return 1;
    return 1.0 / pow(2, n) + series(n - 1);
}

int main() {
    cout << fib(5) << endl;

    cout << factorial(5) << endl;

    cout << sumOfDigits(120) << endl;

    int arr[] = {0, 3, 4};
    cout << findMin(arr, sizeof(arr) / sizeof(arr[0])) << endl;

    cout << DecToBin(120) << endl;

    cout << series(5) << endl;
}