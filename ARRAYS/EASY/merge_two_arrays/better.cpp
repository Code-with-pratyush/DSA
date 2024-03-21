// using set

#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> arr1, vector<int> arr2, int m, int n)
{
  set<int> st;
  vector<int> Union;
  for (int i = 0; i < m; i++)
  {
    st.insert(arr1[i]);
  }
  for (int i = 0; i < n; i++)
  {
    st.insert(arr2[i]);
  }
  for (auto &it : st)
  {
    Union.push_back(it);
  }
  return Union;
}

int main()
{
}