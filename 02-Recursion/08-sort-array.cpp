#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
 for (int i = 0; i < size; i++)
 {
  for (int j = i + 1; j < size; j++)
  {
   if (arr[i] > arr[j])
   {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
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
 int arr[10] = {2, 4, 9, 8, 1, 3, 5, 7, 6, 10};
 sort(arr, 10);
 print(arr, 10);
}