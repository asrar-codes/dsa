#include <iostream>
#include <algorithm>

using namespace std;

int getDiff(int arr[], int n)
{
 sort(arr, arr + n);
 int res = INT_MAX;
 for (int i = 1; i < n; i++)
 {
  res = min(res, arr[i] - arr[i - 1]);
 }
 return res;
}

int main()
{
 // int arr[] = {1, 8, 12, 5, 18};
 int arr[] = {8, -1, 0, 3};
 int diff = getDiff(arr, 2);
 cout << diff << endl;
}