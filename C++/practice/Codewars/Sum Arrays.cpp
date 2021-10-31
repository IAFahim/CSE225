#include <vector>

int sum(std::vector<int> nums) {
  int sum=0;
  for (int i = 0; i < nums.size(); i++)
  {
      sum+=nums.at(i);
  }
  return sum;
}