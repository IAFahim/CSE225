bool isAnagram(const std::string &test, const std::string &original) {
    int arr[128] = {0};
    cout<<test<<" "<<original;
    for (int i = 0; i < test.size(); ++i) {
        arr[tolower(test[i])]++;
    }
    for (int i = 0; i < original.size(); ++i) {
        arr[tolower(original[i])]--;
    }
    for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
        if(arr[i]!=0){
            return false;
        }
    }
    return true;
}