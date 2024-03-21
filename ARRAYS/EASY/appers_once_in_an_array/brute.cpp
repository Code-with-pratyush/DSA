#include <bits/stdc++.h>
using namespace std;

int max_occurance(vector<int> &arr, int n)
{
  for (int i = 0; i < n; i++)
  {
    int num = arr[i];
    int cnt = 0;
    for (int j = 0; j < n; j++)
    {
      if (arr[j] == num)
      {
        cnt++;
      }
    }
    if (cnt == 1)
    {
      return num;
    }
  }
}