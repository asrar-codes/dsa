#include <iostream>

using namespace std;

int bSearch(int arr[], int start, int end, int x, int size)
{
 int mid = (start + end) / 2;
 if (arr[mid] == x)
  return mid;
 if (start > end)
  return -1;
 if (arr[mid] > x)

  return bSearch(arr, start, mid - 1, x, size);
 else

  return bSearch(arr, mid + 1, size - 1, x, size);
}

int main()
{
 int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 int start = 0;
 int n = 10;
 int end = n - 1;
 cout << bsearch(arr, 0, end, 11, n) << endl;
}