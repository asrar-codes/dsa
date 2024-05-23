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
int main()

{
 int arr[] = {10, 80, 30, 90, 40, 50, 70};

 int size = sizeof(arr) / sizeof(arr[0]);
 int l = 0, h = size - 1;

 int index = Lpartition(arr, l, h);
 cout << index << endl;
 print(arr, size);
}