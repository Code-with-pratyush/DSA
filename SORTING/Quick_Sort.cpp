#include <bits/stdc++.h>
using namespace std;

int partition_Array(int arr[], int low, int high)
{
  int pivot = arr[low];
  int i = low;
  int j = high;

  while (i < j)
  {
    while (arr[i] <= pivot && i <= high - 1)
    {
      i++;
    }

    while (arr[j] > pivot && j >= low + 1)
    {
      j--;
    }
    if (i < j)
      swap(arr[i], arr[j]);
  }
  swap(arr[low], arr[j]);
  return j;
}

void Quick_Sort(int arr[], int low, int high)
{
  if (low < high)
  {
    int partition_Index = partition_Array(arr, low, high);
    Quick_Sort(arr, low, partition_Index - 1);
    Quick_Sort(arr, partition_Index + 1, high);
  }
}

int main()
{
  int n;
  cout << "Enter the size of the Array: ";
  cin >> n;
  int arr[n];

  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "The array before sorting: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
  }
  int low = arr[0];
  int high = arr[n - 1];
  Quick_Sort(arr, low, high);
  cout << "The Array After Sorting: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
  }
}