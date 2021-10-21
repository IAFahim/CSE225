#include <bits/stdc++.h>

using namespace std;

int dontGiveMeFive(int start, int end) {
    int count=0;
    for (int i = start; i < end; ++i) {
        string str=to_string(i);
        if(str.find('5')==string::npos){
            count++;
        }
    }
    return count;
}