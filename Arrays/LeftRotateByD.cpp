/*
I/O: arr[] = {1,2,3,4,5}
left rotate by 1
O/P: arr[] = {2,3,4,5,1}
 */
/*
#include <iostream>
using namespace std;
int leftRotate(int arr[], int n)
{
 int temp = arr[0];

 for (int i = 0; i < n - 1; i++)
  arr[i] = arr[i + 1];
 arr[n - 1] = temp;
 return 0;
}

int main()
{
 int arr[] = {1, 2, 3, 4, 5};
 // int arr[] = {30, 5, 20};
 int d = 2;

 // call the function d times to get the array rotated by d;
 for (int i = 0; i < d; i++)
 {
  leftRotate(arr, 5);
 }
 for (int i = 0; i < 5; i++)
 {
  cout << arr[i] << " ";
 }
}
*/

// efficeint method

#include <iostream>
using namespace std;

void leftRotate(int arr[], int d, int n)
{
 int temp[d];
 // arr[] = {1, 2, 3, 4, 5},

 for (int i = 0; i < d; i++)
 {
  temp[i] = arr[i];
 }

 for (int i = d; i < n; i++)
 {
  arr[i - d] = arr[i];
 }

 for (int i = 0; i < d; i++)
 {
  arr[n - d + i] = temp[i];
 }
}

int main()
{

 int arr[] = {1, 2, 3, 4, 5}, n = 5, d = 3;

 cout << "Before Rotation" << endl;

 for (int i = 0; i < n; i++)
 {
  cout << arr[i] << " ";
 }

 cout << endl;

 leftRotate(arr, d, n);

 cout << "After Rotation" << endl;

 for (int i = 0; i < n; i++)
 {
  cout << arr[i] << " ";
 }
}