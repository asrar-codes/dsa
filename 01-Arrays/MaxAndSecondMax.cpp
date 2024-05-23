#include <iostream>
using namespace std;

// This function finds the largest and second-largest elements in an array while avoiding duplicates as being the second-largest element
void findMaxAndSecondMax(int arr[], int n)
{
 // Initialize max1 and
 int max1 = arr[0];
 // max2 to the -1, in case array has only 1 element
 int max2 = -1;

 // Loop through the array from the second element onwards
 for (int i = 1; i < n; i++)
 {
  // If the current element is greater than max1, update both max1 and max2
  if (arr[i] > max1)
  {
   max2 = max1;
   max1 = arr[i];
  }
  else if (arr[i] < max1 && arr[i] > max2)
  {
   // If the current element is less than max1 but greater than max2, update only max2
   max2 = arr[i];
  }
 }

 // Print the values of max1 and max2
 cout << "Max1: " << max1 << " Max2: " << max2 << endl;
}

int main()
{
 int arr[] = {1, 4, 2};
 int arr2[] = {12, 0, 12, 144, 123, 424, 11, 400};

 findMaxAndSecondMax(arr, 3);
 findMaxAndSecondMax(arr2, 8);
}
