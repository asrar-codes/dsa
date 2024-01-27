#include <iostream>
using namespace std;

// insert element as some index in array
// {1,2,3,4,5, }
// 1

int insertElement(int arr[], int capacity, int size, int element, int index)
{
 // Check if array is full
 if (size == capacity)
  return size;

 // Shift elements to make space for new element
 for (int j = size - 1; j >= index; j--)
 {
  // from last element to the element before index

  arr[j + 1] = arr[j];
  // from index to the element before index
 }

 // insert element at index
 arr[index] = element;
 return size + 1; // increase size by 1
}

// Time complexity is O(n)
int main()
{
 int arr[5] = {5, 10, 20};
 int element = 7, index = 1; // insert 7 at index 1 (2nd position)
 insertElement(arr, 5, 3, element, index);
 element = 3;
 insertElement(arr, 5, 4, element, index);

 for (int i = 0; i < 5; i++)
 {
  cout << arr[i] << " ";
 }
}