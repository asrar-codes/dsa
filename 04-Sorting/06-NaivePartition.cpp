#include <iostream>
using namespace std;

// partition the array around a given pivot(element in the array)

void partition(int arr[], int n, int p)
{
 int temp[n];
 int k = 0;
 int key = arr[p];
 for (int i = 0; i < n; i++)
 {
  if (key >= arr[i])
  {
   temp[k] = arr[i];
   k++;
  }
 }
 for (int i = 0; i < n; i++)
 {
  if (key < arr[i])
  {
   temp[k] = arr[i];
   k++;
  }
 }
 for (int i = 0; i < n; i++)
 {
  arr[i] = temp[i];
 }
}

// print the array

void print(int arr[], int size)
{
 for (int i = 0; i < size; i++)
 {
  cout << arr[i] << " ";
 }
}

int main()
{
 int arr[] = {3, 8, 6, 12, 10, 7};
 partition(arr, 6, 5);
 print(arr, 6);
}