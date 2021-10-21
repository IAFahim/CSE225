#include <bits/stdc++.h>

using namespace std;

//int largest_five_digits(const std::string &digits) {
//    int x=0;
//    for (int i = 0; i < digits.size()-5; ++i) {
//        x= stoi(digits)
//    }
//}

int main() {
//    freopen(R"(C:\Users\Fahim\GolandProjects\CSE225\C++\clion\input.txt)", "r", stdin);
    string str = "You hate me";
    int count = 0;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == ' ') {
            count++;
        }
    }
    string arr[count + 1];
    int at = count;

    for (int i = 0; i < str.size(); ++i) {
        if (str[i] != ' ') {
            arr[at] += str[i];
        } else {
            at--;
        }
    }
    string s;
    for (int i = 0; i < count + 1; ++i) {
        if(i==count){
            s+=arr[i];
        }else{
            s+=arr[i]+" ";
        }
    }
    cout<<s;
}