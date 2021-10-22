#include <bits/stdc++.h>

using namespace std;

int countSmileys(const std::vector<std::string> &arr) {
    int count = 0;
    for (int i = 0; i < arr.size(); ++i) {
        if (((arr[i].size()==2 && (arr[i][0]==':'|| arr[i][0]==';'))|| (arr[i].size()==3 && (arr[i][1]=='-'|| arr[i][1]=='~'))) && (arr[i][arr[i].size()-1]==')' || arr[i][arr[i].size()-1]=='D') ) {
//            cout<< arr[i]<<" ";
            count++;
        }
    }
    return count;
}

int main() {
//    freopen(R"(C:\Users\Fahim\GolandProjects\CSE225\C++\clion\input.txt)", "r", stdin);
    cout << countSmileys({";(", ";(", ":)", ":>", ":D", ":-(", ":>"});
}