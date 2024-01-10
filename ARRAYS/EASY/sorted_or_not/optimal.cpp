#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    if (arr[i] < arr[i - 1])
    {
      return false;
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