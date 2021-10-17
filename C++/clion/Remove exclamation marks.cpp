#include <bits/stdc++.h>

using namespace std;

std::string removeExclamationMarks(const std::string& str){
    string st;
    for (char i : str) {
        if(i!='!'){
            st+=i;
        }
    }
    return st;
}