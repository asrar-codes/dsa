/*
Given an array of integers of size 'n'.
Our aim is to calculate the maximum sum of 'k'
consecutive elements in the array.

Input  : arr[] = {100, 200, 300, 400}
         k = 2
Output : 700
 */

#include <iostream>
using namespace std;

int maxSumOfKConsecutive(int arr[], int n, int k)
{
 int sum = 0, maxSum = 0;
 for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < k; j++)
  {
   sum += arr[i + j];
  }
  if (maxSum < sum)
  {
   maxSum = sum;
  }
 }
 return maxSum;
}
int main()
{
 int arr[] = {100,
              200,
              300,
              400};
}