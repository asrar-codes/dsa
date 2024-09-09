#include <iostream>
using namespace std;

// given a no. n, count the no of trailing zeroes in the factorial of n;

// Naive sol: calculate factorial and then  (while fact%10== zero, increment count)

// efficeint sol:

int countZeroes(int n)
{
 int res = 0;
 for (int i = 5; i <= n; i = i * 5)
  res = res + (n / i);
 return res;
}

int main()
{

 cout << countZeroes(10) << endl;
 cout << countZeroes(5) << endl;
 cout << countZeroes(120) << endl;
 cout << countZeroes(251) << endl;

 return 0;
}