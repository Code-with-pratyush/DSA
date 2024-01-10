#include <bits/stdc++.h>
using namespace std;

int second_small(int arr[], int n)
{
  int smallest, second_smallest = INT_MAX;
  // First find the smallest elemnt
  for (int i = 0; i < n; i++)
  {
    smallest = min(arr[i], smallest);
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < second_smallest && arr[i] != smallest)
    {
      second_smallest = arr[i];
    }
  }
  return second_smallest;
}
int second_large(int arr[], int n)
{
  int largest, second_largest = INT_MIN;
  // First find the smallest elemnt
  for (int i = 0; i < n; i++)
  {
    largest = max(arr[i], largest);
    cout << largest;
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > second_largest && arr[i] != largest)
    {
      second_largest = arr[i];
    }
  }
  return second_largest;
}

int main()
{
  int n;
  cout << "Enter the number of elemnts in the array: ";
  cin >> n;
  int arr[n];

  cout << "The array elemts are: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int len = 0;
  len = sizeof(arr) / sizeof(arr[0]);
  if (len == 0 || len == 1)
  {
    cout << "-1";
  }
  else
  {
    int second_smallest = second_small(arr, n);
    int second_largest = second_large(arr, n);

    cout << second_smallest << endl;
    cout << second_largest << endl;
  }

  return 0;
}