#include <bits/stdc++.h>

using namespace std;

int sum(vector<int> numbers) {
    if (numbers.size()<2) {
        return 0;
    }
    int sum = 0, max = numeric_limits<int>::min(), min=numeric_limits<int>::max();
    for (int i = 0; i < numbers.size(); ++i) {
        max= std::max(max,numbers[i]);
        min= std::min(min,numbers[i]);
        sum+=numbers[i];
    }
    return sum-max-min;
}