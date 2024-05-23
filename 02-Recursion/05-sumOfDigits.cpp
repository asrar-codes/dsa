#include <iostream>

using namespace std;

int sumOfDigits(int n)
{
 if (n <= 0)
 {
  return n;
 }
 return n % 10 + sumOfDigits(n / 10);
}

int main()
{
 cout << sumOfDigits(9987) << endl;
 // cout << sumOfDigits(1234) << endl;
 // cout << sumOfDigits(410) << endl;
 // cout << sumOfDigits(0410) << endl;
 // cout << sumOfDigits(000410) << endl;
}