#include <iostream>

using namespace std;

int Lpartition(int arr[], int l, int h)
{
 int pivot = arr[h];
 int i = l - 1;
 for (int j = l; j <= h - 1; j++)
 {
  if (arr[j] < pivot)
  {
   i++;
   swap(arr[i], arr[j]);
  }
 }
 swap(arr[i + 1], arr[h]);
 return i + 1;
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
  int p = Lpartition(arr, l, h);
  quickSort(arr, l, p - 1);
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