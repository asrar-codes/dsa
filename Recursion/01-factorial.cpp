#include <iostream>
using namespace std;

// simple recursive solution

int factorial(int n)
{
 if (n == 1)
 {
  return 1;
 }
 return n * factorial(n - 1);
}

// tail recursive code == more efficeint
int factTailRecursive(int n, int k)
{
 if (n == 1)
  return k;
 return factTailRecursive(n - 1, k * n);
}
int main()
{
 cout << factorial(4) << endl;
 cout << factorial(5) << endl;
 cout << factTailRecursive(4, 1) << endl;
 cout << factTailRecursive(5, 1) << endl;
}