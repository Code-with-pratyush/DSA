#include <bits/stdc++.h>
using namespace std;

int misssingNumber(vector<int> &arr, int N)
{
  int sum = ((N * (N + 1)) / 2);
  int sum2 = 0;
  for (int i = 0; i < N; i++)
  {
    sum2 = sum2 + arr[i];
  }
  int missing_Number = sum - sum2;
  return missing_Number;
}