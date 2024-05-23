#include <iostream>

using namespace std;

void unionOfTwoSortedArrays(int a[], int b[], int m, int n)
{
 int i = 0, j = 0;
 while (i < m && j < n)
 {
  if (i > 0 && a[i] == a[i - 1])
  {
   i++;
   continue;
  }
  if (j > 0 && b[j] == b[j - 1])
  {
   j++;
   continue;
  }
  if (a[i] < b[j])
  {

   cout << a[i] << " ";
   i++;
  }
  else if (a[i] > b[j])
  {

   cout << b[i] << " ";
   j++;
  }
  else
  {
   cout << a[i] << " ";
   i++;
   j++;
  }
 }
 while (i < m)
 {
  if (i > 0 && a[i] == a[i - 1])
  {
   i++;
   continue;
  }
  cout << a[i] << " ";
  i++;
 }
 while (j < n)
 {
  if (j > 0 && b[j] == b[j - 1])
  {
   j++;
   continue;
  }
  cout << b[j] << " ";
  j++;
 }
}

int main()
{
 int a[] = {2, 5, 8};
 int b[] = {2, 8, 9, 10, 15};
 int m = sizeof(a) / sizeof(a[0]);
 int n = sizeof(b) / sizeof(b[0]);
 unionOfTwoSortedArrays(a, b, m, n);
}