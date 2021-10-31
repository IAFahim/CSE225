#include <bits/stdc++.h>
#include "dynarr.h"
#include "dynarr.cpp"

using namespace std;

int main(){
    freopen(R"(C:\Users\Fahim\GolandProjects\CSE225\C++\clion\input.txt)","r",stdin);
    int n=5;
    dynarr<string> d(n);
    for (int i = 0; i < n; ++i) {
        string x;
        cin>>x;
        d.setValue(i,x);
    }
    for (int i = 0; i < n; ++i) {
        cout<<d.getValue(i);
    }
    return 0;
}
