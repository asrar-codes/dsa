#include <iostream>
using namespace std;

// iterative

long long factorial(int n)
{
 long long ans = 1;
 for (int i = 2; i <= n; i++)
 {
  ans = ans * i;
 }
 return ans;
}

// recurisve
long long recFact(int n)
{
 if (n == 1)
 {
  return 1;
 }
 return n * recFact(n - 1);
}

int main()
{
 cout << factorial(3) << endl;
 cout << factorial(5) << endl;
 cout << factorial(10) << endl;
 cout << recFact(3) << endl;
 cout << recFact(5) << endl;
 cout << recFact(10) << endl;
}