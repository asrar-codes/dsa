#include <iostream>
using namespace std;
int sum(int n)
{
 if (n <= 1)
 {
  return 1;
 }
 return n + sum(n - 1);
}

int main()
{
 cout << sum(4) << endl;
 cout << sum(10) << endl;
}

// time complexity O(n)
// auxilary space  O(n)