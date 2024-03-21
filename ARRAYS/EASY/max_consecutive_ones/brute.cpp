#include <bits/stdc++.h>
using namespace std;

int max_consecutive_ones(vector<int> &nums, int n)
{
  int cnt = 0;
  int maxi = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] == 1)
    {
      cnt++;
    }
    else
    {
      cnt = 0;
    }
    maxi = max(maxi, cnt);
  }
  return maxi;
}
