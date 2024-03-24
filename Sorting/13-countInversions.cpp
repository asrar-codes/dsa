// a pair (arr[i], arr[j]) forms an inversion when i<j and arr[i]>arr[j]
// or simply when a greater element appears before smaller element

#include <iostream>
using namespace std;

int countInversions(int arr[], int n)
{
 int res = 0;
 for (int i = 0; i < n - 1; i++)
 {
  for (int j = i + 1; j < n; j++)
  {
   if (arr[i] > arr[j])
    res++;
  }
 }
 return res;
}

// print arary

void print(int arr[], int n)
{
 for (int i = 0; i < n; i++)
 {
  cout << arr[i] << " ";
 }
 cout << endl;
}

int main()
{
 int arr[] = {2, 4, 1, 3, 5};
 int count = countInversions(arr, 5);
 cout << count << endl;

 return 0;
}