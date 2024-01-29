#include <iostream>
using namespace std;

int deleteElement(int arr[], int n, int element)
{
  // traverse the array and find the element to be deleted

  int i;
  for (i = 0; i < n; i++)
  {
    if (arr[i] == element)
      break;
  }
  // if element is not found
  if (i == n)
    return n; // element not found
  // shift elements to the left
  for (int j = i; j < n - 1; j++)
    arr[j] = arr[j + 1];
  return n - 1;
}

// Time complexity: O(n)

int main()
{
  int arr[] = {3, 8, 12, 5, 6}, element = 12, n = 5;
  n = deleteElement(arr, n, element);
  for (int i = 0; i < n; i++)

    cout
        << arr[i] << " ";
}