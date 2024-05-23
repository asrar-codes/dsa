#include <iostream>

using namespace std;

// function to reverse the array

int reverseArray(int arr[], int n)
{
 int start = 0;
 int end = n - 1;
 while (start < end)
 {
  int temp = arr[start];
  arr[start] = arr[end];
  arr[end] = temp;
  start++;
  end--;
 }
 return 0;
}

int main()
{
 // int arr[] = {1, 2, 3, 4, 5};
 int arr[] = {1, 2, 3, 4, 5, 6};
 reverseArray(arr, 6); // calling the function to reverse the array elements in place.
 for (int i = 0; i < 6; i++)
 {
  cout << arr[i] << " " << endl;
 }
}