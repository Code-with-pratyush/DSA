#include <bits/stdc++.h>
using namespace std;

void rotate_by_d_places(int arr[], int k, int n)
{
  if (n == 0)
  {
    return;
  }
  k = k % n;
  if (k > n)
  {
    return;
  }
  int temp[k];
  // we to store the value of array in temp
  for (int i = 0; i < k; i++)
  {
    temp[i] = arr[i];
  }
  // We have to shift all the values of the array to the first half
  for (int i = 0; i < n - k; i++)
  {
    arr[i] = arr[i + k];
  }
  // now putting the value of temp array elements in the last half
  int j = 0;
  for (int i = 0; i < k; i++)
  {
    arr[i + k] = temp[j];
    j++;
  }
}

int main()
{
  int n;
  cin >> n;

  int k;
  cin >> k;
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
  rotate_by_d_places(arr, k, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
  }
}