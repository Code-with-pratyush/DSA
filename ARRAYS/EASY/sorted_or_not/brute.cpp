#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[i])
      {
        return false;
      }
    }
  }
  return true;
}

int main()
{
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  int arr[n];

  cout << "Ente the elements of the array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  bool res = isSorted(arr, n);

  if (res)
  {
    cout << "The array is sorted";
  }
  else
  {
    cout << "The array is not sorted";
  }
}