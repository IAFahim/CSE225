#include <bits/stdc++.h>
#include "dynarr.cpp"

using namespace std;

int main(){
    int n=11;
    int arr[]={0,1,2,3,4,5,6,7,8,10,11};
    dynarr<int> d(n);
    for (int i = 0; i < n; ++i) {
        d.setData(arr[i],i);
    }
    d.print(' ');
    cout<< d.findFirst(9);
}