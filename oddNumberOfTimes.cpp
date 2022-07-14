#include <iostream>
using namespace std;

int main()
{
  // Find the Number Occurring an Odd Number of Times: Given an array of positive integers, all numbers occur an even number of times except one number which occurs an odd number of times. Find the number in O(n) time & constant space.Example :I/P =[1,2,3,2,3,1,3] O/P = 3
  int nums[] = {1, 2, 3, 2, 3, 1, 3};
  int x = 0;
  for (auto a : nums)
  {
    x ^= a;
  }
  cout << x << endl;
}