#include <bits/stdc++.h>

using namespace std;

std::string seriesSum(int n)
{
    double sum=0,d=-2;
    for (int i = 1; i <= n; ++i) {
        sum+=1/(d+=3);
    }
    char str[10];
    sprintf(str,"%.2f",sum);
    return str;
}

int main() {
    freopen(R"(C:\Users\Fahim\GolandProjects\CSE225\C++\clion\input.txt)", "r", stdin);
    int a;
    cin >> a;
    cout<< seriesSum(a);
}