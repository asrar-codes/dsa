#include <iostream>
using namespace std;
// given an array, a low Index, mid index and high index, it is given that elements from low to mid are sorted and elements from mid + 1 to high are sorted.. We need to sort the array from low to high..
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
int main()
{
 // int a[] = {10, 15, 20, 11, 30};
 int a[] = {5, 8, 12, 14, 7};
 int low = 0, mid = 3, high = 4;

 mergeFunction(a, low, mid, high);
 print(a, 5);

 // time complexity is theta(n);
 // aux space theta(n)
 // n is the no elements from low to high
}