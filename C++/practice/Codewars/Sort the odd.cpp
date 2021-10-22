#include <bits/stdc++.h>

using namespace std;

class Kata {
public:
    static std::vector<int> sortArray(std::vector<int> array) {
        vector<int> odds;
        for (int i = 0; i < array.size(); ++i) {
            if(array[i]&1){
                odds.push_back(array[i]);
            }
        }
        std::sort(odds.begin(), odds.end());
        for (int i = 0,at=0; i < array.size(); ++i) {
            if(array[i]&1){
                array[i]=odds[at++];
            }
        }
        return array;
    }
};