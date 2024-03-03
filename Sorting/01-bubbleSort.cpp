#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n)
{
 int count = 0;
 for (int i = 0; i < n - 1; i++)
 {
  bool swapped = false;

  for (int j = 0; j < n - i - 1; j++)
  {
   count++;
   if (arr[j] > arr[j + 1])
   {
    int temp = arr[j];
    arr[j] = arr[j + 1];
    arr[j + 1] = temp;
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

int main()
{
 int arr[10] = {1, 9, 10, 4, 8, 3, 7, 2, 6, 5};
 bubbleSort(arr, 10);
 print(arr, 10);
}