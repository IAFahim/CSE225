#include <bits/stdc++.h>
#include "complex.h"

using namespace std;

int main() {
    Complex a(2, 3);
    Complex b(5, 5);
    Complex c = a * b;
    c.Print();
    cout << (a != b);
}