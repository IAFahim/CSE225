#include <vector>

double calcAverage(const std::vector<int> &values)
{
    double sum=0;
    for (int i = 0; i < values.size(); i++)
    {
        sum+=values.at(i);
    }
    return sum/values.size(); 
}