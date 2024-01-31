// remove duplicate from a sorted array
/*
#include <iostream>
using namespace std;
int removeDuplicates(int arr[], int n)
{
 int temp[n];
 temp[0] = arr[0];
 int newSize = 1;
 for (int i = 1; i < n; i++)
 {
  if (arr[i] != temp[newSize - 1])
  {
   temp[newSize] = arr[i];
   newSize++;
  }
 }
 for (int i = 0; i < newSize; i++)
 {
  cout << temp[i] << " ";
 }
 return newSize;
}
int main()
{
 // int arr[] = {10, 10, 10};
 int arr[] = {10, 10, 10, 20, 20, 30, 30};

 removeDuplicates(arr, 7);
}
Time complexity: O(n)
auxilariy space: theta(n)
*/

#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n)
{
 int res = 1;
 for (int i = 1; i < n; i++)
 {
  if (arr[res - 1] != arr[i])
  {
   arr[res] = arr[i];
   res++;
  }
 }
 for (int i = 0; i < res; i++)
 {
  cout << arr[i] << " ";
 }
 return res;
}

int main()
{
 // int arr[] = {10, 10, 10};
 int arr[] = {10, 10, 10, 20, 20, 30, 30};

 removeDuplicates(arr, 7);
}

// time complexity: O(n);
// auxilaray space: O(1)
