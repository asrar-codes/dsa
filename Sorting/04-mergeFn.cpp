#include <iostream>
using namespace std;

void mergeFunction(int a[], int low, int mid, int high)
{
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
int main()
{
}