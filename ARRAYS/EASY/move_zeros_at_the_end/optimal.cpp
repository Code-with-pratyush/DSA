// Two pointers approch
#include <bits/stdc++.h>
using namespace std;

vector<int> remove_zeros(int n, vector<int> arr)
{
  int j = -1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
    {
      j = i;
      break;
    }
  }
  if (j == -1)
  {
    return;
  }
  for (int i = j + 1; i < n; i++)
  {
    if (arr[i] != 0)
    {
      swap(arr[i], arr[j]);
    }
  }
  return arr;
}