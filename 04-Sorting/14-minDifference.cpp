#include <iostream>
#include <algorithm>
#include <math.h>

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
 int arr[] = {1, 5, 3, 19, 18, 25};
 // int arr[] = {8, -1, 0, 3};
 int diff = getDiff(arr, 5);
 cout << diff << endl;
}

// C++ program to find minimum difference between
// any pair in an unsorted array
// #include <iostream>
// #include <algorithm>
// using namespace std;

// // Returns minimum difference between any pair
// int findMinDiff(int arr[], int n)
// {
//  // Sort array in non-decreasing order
//  sort(arr, arr + n);

//  // Initialize difference as infinite
//  int diff = INT_MAX;

//  // Find the min diff by comparing adjacent
//  // pairs in sorted array
//  for (int i = 0; i < n - 1; i++)
//   if (arr[i + 1] - arr[i] < diff)
//    diff = arr[i + 1] - arr[i];

//  // Return min diff
//  return diff;
// }

// // Driver code
// int main()
// {
//  int arr[] = {1, 5, 3, 19, 18, 25};
//  int n = sizeof(arr) / sizeof(arr[0]);
//  cout << "Minimum difference is " << findMinDiff(arr, n);
//  return 0;
// }
