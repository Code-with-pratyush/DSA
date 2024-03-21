// Two pointers  approch
#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> arr1, vector<int> arr2, int m, int n)
{
  int i = 0;
  int j = 0;
  vector<int> Union;
  while (i < n && j < m)
  {
    if (arr1[i] < arr2[j])
    {
      if (Union.size() == 0 || Union.back() != arr1[i])
      {
        Union.push_back(arr1[i]);
      }
      i++;
    }
    else
    {
      if (Union.size() == 0 || Union.back() != arr2[j])
      {
        Union.push_back(arr2[j]);
      }
      j++;
    }
  }
  while (i < n)
  {
    Union.push_back(arr1[i]);
    i++;
  }
  while (j < m)
  {
    Union.push_back(arr2[j]);
    j++;
  }
}