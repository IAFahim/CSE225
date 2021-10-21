unsigned int number(const std::vector<std::pair<int, int>>& busStops){
    int p=0;
    for (int i = 0; i < busStops.size(); ++i) {
        p+=busStops[i].first-busStops[i].second;
    }
    return p;
}