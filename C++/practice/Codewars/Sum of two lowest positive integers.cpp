#include <bits/stdc++.h>

using namespace std;

long sumTwoSmallestNumbers(const std::vector<int>& numbers)
{

    for (int i = 0; i < numbers.size(); ++i) {
        cout<<numbers[i]<<", ";
    }
    long a=numbers[0],b=numbers[1];
    for (int i = 1; i < numbers.size(); ++i) {
        if(numbers[i]<a){
            b=a;
            a=numbers[i];
        }else if(numbers[i]<b) {
            b = numbers[i];
        }
    }
    return a+b;
}

int main(){
    cout<<sumTwoSmallestNumbers({1000,2,3});
}