#include <iostream>
using namespace std;

// code to find maximum in an array
int findMax(int arr[], int n)
{
 // suppose first element is the maximum
 int max = arr[0];
 // loop through all the array
 for (int i = 1; i < n; i++)
 {
  // check if the current element is greater than max, if so make max equal to that element
  if (max < arr[i])
  {
   max = arr[i];
  }
 }
 return max;
}

int main()
{
 int arr[] = {1, 2, 3, 4, 5};
 int arr2[] = {12, 0, -12, 144, -123, 424, 11};
 // Output the maximum element in arr
 cout << "Maximum element in arr: " << findMax(arr, 5) << endl;
 // Output: 5

 // Output the maximum element in arr2
 cout << "Maximum element in arr: " << findMax(arr2, 7) << endl;
 // Output: 424
}