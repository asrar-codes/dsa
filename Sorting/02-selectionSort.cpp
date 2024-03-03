#include <iostream>

using namespace std;

void selectionSort(int arr[], int n)
{
 for (int i = n - 1; i >= 0; i--)
 {
  for (int j = n - i - 1; j >= 0; j--)
  {
   if (arr[j] < arr[j - 1])
   {

    int temp = arr[j];
    arr[j] = arr[j - 1];
    arr[j - 1] = temp;
   }
  }
 }
}

void print(int arr[], int n)
{
 for (int i = 0; i < n; i++)
 {
  cout << arr[i] << " ";
 }
}

int main()
{
 // int arr[10] = {1, 9, 10, 4, 8, 3, 7, 2, 6, 5};
 // print(arr, 10);
 int arr[10] = {1, 2, 3, 4, 5, 6, 8, 7, 9, 10};
 selectionSort(arr, 10);
 print(arr, 10);
}