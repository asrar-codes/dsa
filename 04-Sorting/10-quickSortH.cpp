#include <iostream>

using namespace std;

int Hpartition(int arr[], int l, int h)
{
 int pivot = arr[l];
 int i = l - 1, j = h + 1;

 while (true)
 {
  do
  {
   i++;
  } while (arr[i] < pivot);

  do
  {
   j--;
  } while (arr[j] > pivot);
  if (i >= j)
   return j;
  swap(arr[i], arr[j]);
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

void quickSort(int arr[], int l, int h)
{
 if (l < h)
 {
  int p = Hpartition(arr, l, h);
  quickSort(arr, l, p);
  quickSort(arr, p + 1, h);
 }
}

int main()
{
 int arr[] = {8, 4, 7, 9, 3, 10, 5};

 int size = sizeof(arr) / sizeof(arr[0]);
 int l = 0, h = size - 1;
 quickSort(arr, l, h);

 print(arr, size);
}