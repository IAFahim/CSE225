#include <vector>
int get_average(std::vector<int> marks)
{
    int sum = 0;
    for (int i = 0; i < marks.size(); i++)
    {
        sum += marks.at(i);
    }
    return sum / marks.size();
}