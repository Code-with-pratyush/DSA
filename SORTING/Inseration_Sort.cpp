// take an element and  arrage it into its correct position by comparing it to the elements leftwards
#include <bits/stdc++.h>
using namespace std;

void Insertion_Sort(int arr[], int n)
{
  for (int i = 0; i <= n - 1; i++)
  {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
      int temp = arr[j - 1];
      arr[j - 1] = arr[j];
      arr[j] = temp;
      j--;
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
  Insertion_Sort(arr, n);
  cout << endl;
  cout << "The Array after sorting: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}