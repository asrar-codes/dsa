#include <iostream>
using namespace std;

// given two sorted array, merge them in ascending order
void merge(int a[], int b[], int m, int n, int ans[])
{

 int i = 0, j = 0, k = 0;
 while (i < m && j < n)
 {
  if (a[i] <= b[j])
  {
   ans[k] = a[i];
   k++;
   i++;
  }
  else
  {
   ans[k] = b[j];
   j++;
   k++;
  }
 }

 while (i < m)
 {
  ans[k] = a[i];
  i++;
  k++;
 }
 while (j < n)
 {
  ans[k] = b[j];
  j++;
  k++;
 }
}
// print the array
void print(int arr[], int size)
{
 // print the array
 for (int i = 0; i < size; i++)
 {
  cout << arr[i] << " ";
 }
}
int main()
{
 int a[] = {5, 8, 9}, b[] = {4, 9, 11, 12, 19, 22, 30};
 int m = sizeof(a) / sizeof(a[0]);
 int n = sizeof(b) / sizeof(b[0]);
 int ans[m + n];
 merge(a, b, m, n, ans);
 print(ans, m + n);
}

// time complexity O(m+n)
// space complexity O(m+n)