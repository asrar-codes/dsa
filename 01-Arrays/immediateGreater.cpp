#include <iostream>
#include <vector>
using namespace std;

int immediateGreater(int arr[], int n, int x)
{
 vector<int> temp;
 for (int i = 0; i < n; i++)
 {
  if (arr[i] > x)
  {
   temp.push_back(arr[i]);
  }
 }
 if (temp.size() == 0)
  return -1;
 int min = temp[0];
 for (int i = 1; i < temp.size(); i++)
 {
  if (min > temp[i])
  {
   min = temp[i];
  }
 }
 return min;
}
int main()
{
 int arr[] = {1, 2, 3, 4, 5};
 cout << immediateGreater(arr, 5, 1);
}