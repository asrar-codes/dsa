#include <iostream>
using namespace std;

// gcd(a,b): is the greatest posssible no. which divides both and b;

// Naive sol:
int gcdN(int a, int b)
{
 int res = min(a, b);
 while (true)
 {
  if (a % res == 0 && b % res == 0)
   break;
  res--;
 }
 return res;
}

// efficient sol:

// idea: euclidean algorithm:
// if b<a then gcd(a,b) = gcd(a-b, b);

int gcdE(int a, int b)
{
 while (a != b)
 {
  if (a > b)
   a = a - b;
  else
   b = b - a;
 }
 return a;
}

// optimized sol:
int gcdO(int a, int b)
{
 if (b == 0)
  return a;
 return gcdO(b, a % b);
}

int main()
{

 cout << gcdN(2, 4) << endl;
 cout << gcdN(4, 8) << endl;
 cout << gcdN(7, 13) << endl;
 cout << gcdN(10, 15) << endl
      << endl;

 cout << gcdE(2, 4) << endl;
 cout << gcdE(4, 8) << endl;
 cout << gcdE(7, 13) << endl;
 cout << gcdE(10, 15) << endl
      << endl;
 cout << gcdO(2, 4) << endl;
 cout << gcdO(4, 8) << endl;
 cout << gcdO(7, 13) << endl;
 cout << gcdO(10, 15) << endl;
}