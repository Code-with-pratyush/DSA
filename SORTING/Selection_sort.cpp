#include <bits/stdc++.h>
using namespace std;

void Selection_sort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int mini = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[mini])
      {
        mini = j;
      }
    }
    // Swapping algorithm
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }
}

int main()
{
  int n;
  cout << "Enter the number of elements in the array: ";
  cin >> n;

  int arr[n];

  cout << "The array elements are: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "The array before sorting: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  Selection_sort(arr, n);
  cout << endl;
  cout << "The Array after sorting: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}

// Time Complexity: O(N2);