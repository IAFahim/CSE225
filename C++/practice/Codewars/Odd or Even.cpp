std::string odd_or_even(const std::vector<int> &arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        sum+=arr[i];
    }
    if ((sum & 1) == 0) {
        return "even";
    }
    return "odd";
}