#include <iostream>
#include <algorithm>
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

int main()
{
 int arr[] = {5, 3, 8, 4, 2, 7, 1, 10};

 int size = sizeof(arr) / sizeof(arr[0]);
 int l = 0, h = size - 1;

 int index = Hpartition(arr, l, h);
 cout << index << endl;
 print(arr, size);
}