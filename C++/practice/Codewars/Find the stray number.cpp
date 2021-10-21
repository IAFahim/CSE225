int stray(const std::vector<int>& numbers) {
    map<int, int> mp;
    for (int number : numbers) {
        mp[number]++;
    }
    for (auto & itr : mp) {
        if(itr.second==1){
            return itr.first;
        }
    }
    return 0;
}