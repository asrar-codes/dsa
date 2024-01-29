#include <iostream>
using namespace std;

// function to check if the array is sorted (increasing order)
// my first approach..
bool isSorted(int arr[], int n)
{
 bool flag = true;
 for (int i = 0; i < n - 1; i++)
 {
  if (arr[i] <= arr[i + 1])
  {
   flag = true;
  }
  else
  {
   flag = false;
   break;
  }
 }
 return flag;
}

// another approach gfg course
// function to check if the given array is sorted
bool isSortedB(int arr[], int n)
{
 // loop through the array
 for (int i = 1; i < n; i++)
 {
  // if current element is less than the previous element
  if (arr[i] < arr[i - 1])
  {
   // then array is not sorted
   return false;
  }
 }
 // if loop is completed without returning false
 // then array is sorted
 return true;
}
int main()
{
 // int arr[] = {10, 9, 20, 8, 5};
 // int arr[] = {1, 2, 2, 8, 9};
 int arr[] = {5, 12, 30, 2, 35};

 cout << isSorted(arr, 5) << endl;
 cout << isSorted(arr, 5) << endl;
}