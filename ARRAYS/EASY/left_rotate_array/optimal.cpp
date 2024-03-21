#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
  int temp = arr[0];
  for (int i = 0; i < n - 1; i++)
  {
    arr[i] = arr[i + 1];
  }
  arr[n - 1] = temp;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
  }
}

int main()
{
  int n;
  cin >> n;

  int arr[] = {1, 2, 3, 4, 5, 6, 6, 7};

  solve(arr, n);
}