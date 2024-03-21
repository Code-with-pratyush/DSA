// Two_pointers approch
#include <bits/stdc++.h>
using namespace std;

int remove_duplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++)
  {
    if (arr[i] != arr[j])
    {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}

int main()
{
  int arr[9] = {1, 1, 2, 3, 3, 4, 5, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = remove_duplicates(arr, n);
  for (int i = 0; i < k; i++)
  {
    cout << arr[i];
  }
}