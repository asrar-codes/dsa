#include <iostream>
using namespace std;

void mergeFunction(int a[], int low, int mid, int high)
{
 // make two arrays and insert elements from low to mid to left array and insert elements from mid+1 to high to right array
 // then logic is same as merge two sorted arrays (as done prev.)
 int n1 = mid - low + 1, n2 = high - mid;
 int left[n1], right[n2];
 for (int i = 0; i < n1; i++)
 {
  left[i] = a[low + i];
 }
 for (int i = 0; i < n2; i++)
 {
  right[i] = a[mid + i + 1];
 }
 int i = 0, j = 0, k = low;
 while (i < n1 && j < n2)
 {
  if (left[i] <= right[j])
  {
   a[k] = left[i];
   i++;
   k++;
  }
  else
  {
   a[k] = right[j];
   k++;
   j++;
  }
 }
 while (i < n1)
 {
  a[k] = left[i];
  i++;
  k++;
 }
 while (j < n2)
 {
  a[k] = right[j];
  j++;
  k++;
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

// merge sort algorithm

void mergeSort(int arr[], int l, int r)
{
 if (r > l)
 {
  int m = l + (r - l) / 2;
  mergeSort(arr, l, m);
  mergeSort(arr, m + 1, r);
  mergeFunction(arr, l, m, r);
 }
}

int main()
{
 int a[] = {10, 9, 8, 7, 6, 44, 11, -1, 0};
 int size = sizeof(a) / sizeof(a[0]);
 int l = 0;
 int r = size - 1;
 mergeSort(a, l, r);
 print(a, size);
}