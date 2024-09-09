#include <iostream>
using namespace std;

int reverse(int n)
{
 int ans = 0;
 int i = 0;
 while (n)
 {
  int r = n % 10;
  ans = (ans * 10) + r;
  n = n / 10;
  i++;
 }

 return ans;
}

int main()
{
 cout << reverse(10) << endl;
 cout << reverse(100) << endl;
 cout << reverse(123) << endl;
 cout << reverse(2346) << endl;
}