#include <iostream>

using namespace std;

void interSectionOfTwoArrays(int arr1[], int arr2[], int n, int m)
{
 for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < m; j++)
  {
   if (i > 0 && arr1[i] == arr1[i - 1])
    continue;
   if (arr1[i] == arr2[j])
   {
    cout << arr1[i] << " ";
    break;
   }
  }
 }
}

// efficient solution : when the arrays are sorted;

void intersectionOfTwoSortedArrays(int a[], int b[], int n, int m)
{
 int i = 0, j = 0;
 while (i < n && j < m)
 {
  if (i > 0 && a[i] == a[i - 1])
  {
   i++;
   continue;
  }
  if (a[i] < b[j])
  {
   i++;
  }
  else if (a[i] > b[j])
  {
   j++;
   continue;
  }
  else
  {
   cout << a[i] << " ";
   i++;
   j++;
  }
 }
}

int main()
{
 int arr1[] = {3, 5, 10, 10, 15, 15, 20};
 int arr2[] = {5, 10, 10, 15};
 int n = sizeof(arr1) / sizeof(arr1[0]);
 int m = sizeof(arr2) / sizeof(arr2[0]);
 // interSectionOfTwoArrays(arr1, arr2, n, m);

 int a[] = {10, 20, 20, 40, 60};
 int b[] = {2, 20, 20, 40};
 int p = sizeof(a) / sizeof(a[0]);
 int q = sizeof(b) / sizeof(b[0]);
 intersectionOfTwoSortedArrays(a, b, p, q);
}