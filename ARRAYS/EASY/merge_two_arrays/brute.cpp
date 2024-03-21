// using map

#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> arr1, vector<int> arr2, int m, int n)
{
  map<int, int> mp;
  vector<int> Union;
  for (int i = 0; i < m; i++)
  {
    mp[arr1[i]]++;
  }
  for (int i = 0; i < n; i++)
  {
    mp[arr2[i]]++;
  }
  for (auto &it : mp)
  {
    Union.push_back(it.first);
  }
}

int main()
{
}