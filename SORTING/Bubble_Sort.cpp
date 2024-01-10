// compare two elements and put the largest at the end

#include <bits/stdc++.h>
using namespace std;

void Bubble_Sort(int arr[], int n)
{
  for (int i = n - 1; i >= 0; i--)
  {
    bool didSwap = false;
    for (int j = 0; j <= i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
        didSwap = true;
      }
    }
    if (didSwap == false)
    {
      break;
    }
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
  Bubble_Sort(arr, n);
  cout << endl;
  cout << "The Array after sorting: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}