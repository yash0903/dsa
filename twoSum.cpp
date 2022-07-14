#include <iostream>
using namespace std;

int main()
{
  // Given an array of n elements. Find two elements in the array such that their sum is equal to given element K.
  // brute force solution

  int nums[5] = {1, 3, 2, 4, 5};
  int target = 7;
  for (int i = 0; i < 5; i++)
  {
    for (int j = i + 1; j < 5; j++)
    {
      if (nums[i] + nums[j] == target)
      {
        cout << true;
        return 0;
      }
    }
  }
  cout << false;
  return 0;
}