#include <bits/stdc++.h>

using namespace std;

std::vector<int> countBy(int x,int n){
    vector<int> v;
    for (int i = 1; i <= n; ++i) {
        v.push_back(i*x);
    }
    return v;
}