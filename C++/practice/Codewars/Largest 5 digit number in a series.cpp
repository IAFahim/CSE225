int largest_five_digits(const std::string &digits) {
    int m = stoi(digits.substr(0, (5 < digits.size()) ? 5 : digits.size()));
    for (int i = 6; i <= digits.size(); ++i) {
        int c = stoi(digits.substr(i - 5, 5));
        if (m < c) {
            m = c;
        }
    }
    return m;
}