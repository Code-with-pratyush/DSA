#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
  int temp[n];
  for (int i = 1; i < n; i++)
  {
    temp[i - 1] = arr[i];
  }
  temp[n - 1] = arr[0];
  for (int i = 0; i < n; i++)
  {
    cout << temp[i] << " ";
  }
}

int main()
{
  int n;
  cin >> n;

  int arr[] = {1, 2, 3, 4, 5, 6, 7};

  solve(arr, n);
}