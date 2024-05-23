#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int x, int size)
{
 while (start <= end)
 {
  int mid = (start + end) / 2;
  if (arr[mid] == x)
   return mid;
  if (arr[mid] > x)
  {
   end = mid - 1;
  }
  else
  {
   start = mid + 1;
   end = size - 1;
  }
 }
 return -1;
}

int main()
{
 int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 int start = 0, size = 10, end = size - 1;
 cout << binarySearch(arr, start, end, 2, size) << endl;
}