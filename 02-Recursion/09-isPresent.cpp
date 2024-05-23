#include <iostream>

using namespace std;

bool isPresent(int arr[], int n, int x, int i)
{
 if (i >= n)
  return 0;
 else if (arr[i] == x)
  return 1;
 else
  return isPresent(arr, n, x, i + 1);
}

int main()
{
 int arr[10] = {1, 9, 10, 4, 8, 3, 7, 2, 6};
 cout << isPresent(arr, 10, 6, 0);
}