#include <iostream>
using namespace std;

bool palindrome(int n)
{
 int temp = n;
 int rev = 0;
 int i = 0;
 while (temp)
 {
  int r = temp % 10;
  rev = (rev * 10) + r;
  temp = temp / 10;
  i++;
 }

 return rev == n;
}

int main()
{
 cout << palindrome(10) << endl;
 cout << palindrome(100) << endl;
 cout << palindrome(123) << endl;
 cout << palindrome(101) << endl;
 cout << palindrome(123321) << endl;
}