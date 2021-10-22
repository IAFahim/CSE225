bool narcissistic(int value) {
    int sum = 0;
    string str = to_string(value);
    for (int i = 0; i < str.size(); ++i) {
        int x = str[i] - '0', d = 1;
        for (int p = 0; p < str.size(); ++p) {
            d *= x;
        }
        sum+=d;
    }
    cout<<sum;
    return sum==value;
}