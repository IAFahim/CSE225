#include <bits/stdc++.h>

using namespace std;

long queueTime(const std::vector<int>& customers,int n){
    long t=0;
    vector<long>arr(n,0);
    for (int customer : customers) {
        int pos= min_element(arr.begin(), arr.end())-arr.begin();
        arr[pos]+=customer;
    }
    return *max_element(arr.cbegin(),arr.cend());
}