#include <bits/stdc++.h>

using namespace std;

class Kata {
public:
    static std::vector<std::string> towerBuilder(int n) {
        std::vector<std::string> arr(n);
        for (int i = 1; i <= n; ++i) {
            string sp = string(n - i, ' ');
            string st = string(i * 2 - 1, '*');
            arr[i-1] = sp + st + sp;
        }
        return arr;
    }
};