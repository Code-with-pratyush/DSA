#include <bits/stdc++.h>
using namespace std;

int remove_duplicate(int arr[], int n)
{
  set<int> st;
  for (int i = 0; i < n; i++)
  {
    st.insert(arr[i]);
  }
  int k = st.size();
  int j = 0;
  for (int it : st)
  {
    arr[j++] = it;
  }
  return k;
}

int main()
{
  int arr[9] = {1, 1, 2, 3, 3, 4, 5, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = remove_duplicate(arr, n);
  for (int i = 0; i < k; i++)
  {
    cout << arr[i];
  }
}
