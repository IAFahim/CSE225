#include <vector>
#include <limits>

using namespace std;

int min(const vector<int>& list){
    int min=std::numeric_limits<int>::max();
    for (int i : list) {
        if(min>i){
            min=i;
        }
    }
    return min;
}

int max(const vector<int>& list){
    int max=0;
    for (int i : list) {
        if(max < i){
            max=i;
        }
    }
    return max;
}