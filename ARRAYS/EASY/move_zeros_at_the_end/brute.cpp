#include <bits/stdc++.h>
using namespace std;

vector<int> remove_zeros(int n, vector<int> arr)
{
  vector<int> temp;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
    {
      temp.push_back(arr[i]);
    }
  }
  int nz = temp.size();
  for (int i = 0; i < nz; i++)
  {
    arr[i] = temp[i];
  }
  for (int i = nz; i < n; i++)
  {
    arr[i] = 0;
  }
}