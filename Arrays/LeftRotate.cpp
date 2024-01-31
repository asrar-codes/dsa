/*
I/O: arr[] = {1,2,3,4,5}
O/P: arr[] = {2,3,4,5,1}
 */

#include <iostream>
using namespace std;
int leftRotate(int arr[], int n)
{
 for (int i = 0; i < n - 1; i++)
 {
  int temp = arr[i];
  arr[i] = arr[i + 1];
  arr[i + 1] = temp;
 }
 return 0;
}
int leftRotateB(int arr[], int n)
{
 int temp = arr[0];

 for (int i = 0; i < n - 1; i++)
  arr[i] = arr[i + 1];
 arr[n - 1] = temp;
 return 0;
}

int main()
{
 // int arr[] = {1, 2, 3, 4, 5};
 int arr[] = {30, 5, 20};
 leftRotateB(arr, 3);
 for (int i = 0; i < 3; i++)
 {
  cout << arr[i] << " ";
 }
}