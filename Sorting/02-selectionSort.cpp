#include <iostream>

using namespace std;

// my solution
void selectionSort(int arr[], int n)
{
 int count = 0;
 for (int i = n - 1; i >= 0; i--)
 {
  bool swapped = false;
  for (int j = n - 1; j >= 1; j--)
  {
   count++;
   if (arr[j] < arr[j - 1])
   {

    int temp = arr[j];
    arr[j] = arr[j - 1];
    arr[j - 1] = temp;
    swapped = true;
   }
  }
  if (swapped == false)
   break;
 }
 cout << count << endl;
}

void print(int arr[], int n)
{
 for (int i = 0; i < n; i++)
 {
  cout << arr[i] << " ";
 }
}

// course solution

void courseSelectionSort(int arr[], int n)
{
 int count = 0;
 for (int i = 0; i < n; i++)
 {
  int min_index = i;
  for (int j = i + 1; j < n; j++)
  {
   count++;
   if (arr[j] < arr[min_index])
   {
    min_index = j;
    swap(arr[min_index], arr[i]);
   }
  }
 }
 cout << count << endl;
}
int main()
{
 // int arr[10] = {1, 9, 10, 4, 8, 3, 7, 2, 6, 5};
 // print(arr, 10);
 int arr[5] = {10, 20, 30, 40, 50};
 // int arr[] = {1, 2, 3, 4, 5, 6, 8, 7, 9, 10};
 // int arr[] = {5, 2, 7, 2, 1, 5, 9};
 int size = sizeof(arr) / sizeof(arr[0]);
 // selectionSort(arr, size);
 // print(arr, size);
 courseSelectionSort(arr, size);
 print(arr, size);
}