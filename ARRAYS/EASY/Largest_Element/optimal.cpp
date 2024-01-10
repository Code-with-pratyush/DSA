#include <bits/stdc++.h>
using namespace std;

int Largest_Element(int arr[], int n)
{
  int max = arr[0];
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}

int main()
{
  int n;
  cout << "Enter the elemnents in the array: ";
  cin >> n;
  int arr[n];

  cout << "Enter the elements in the Array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int res = Largest_Element(arr, n);
  cout << res;
}