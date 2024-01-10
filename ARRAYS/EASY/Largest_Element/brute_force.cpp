#include <bits/stdc++.h>
using namespace std;

void Sort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int mini = i;
    for (int j = i + 1; j <= n - 1; j++)
    {
      if (arr[j] < arr[mini])
      {
        int temp = arr[j];
        arr[j] = arr[mini];
        arr[mini] = temp;
      }
    }
  }
}

int largest(int arr[], int n)
{
  Sort(arr, n);
  int largest = arr[n - 1];
  return largest;
}

int main()
{
  int n;
  cout << "Enter the size of the Array: ";
  cin >> n;

  int arr[n];

  cout << "Enter the elements in the Array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int res = largest(arr, n);
  cout << res;
}