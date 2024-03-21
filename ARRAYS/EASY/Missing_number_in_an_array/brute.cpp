#include <bits/stdc++.h>
using namespace std;

int missing(vector<int> &arr, int n)
{
  for (int i = 1; i < n; i++)
  {
    bool flag = false;
    for (int j = 0; j < n - 1; j++)
    {
      if (arr[j] == i)
      {
        flag = true;
        break;
      }
    }
    if (flag == false)
    {
      return i;
    }
  }
}