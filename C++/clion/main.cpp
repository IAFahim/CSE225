#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        string s;
        if(s.length()>10)
        {
            for(int i=0;i<s.length();i++)
            {
                char b=s[i];
                char e=s[s.length()-1];
                int a=s.length()-2;
            }

            t=b+to_string(a)+e;
            cout<< t;

        }
        else
        {
            cout<< s;
        }
    }
    return 0;
}