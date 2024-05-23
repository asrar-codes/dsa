#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// my solution

bool isPalindrome(string &s, int start, int end)
{

 if (s[start] != s[end])
 {
  return 0;
 }

 if (start < end)
  return isPalindrome(s, start + 1, end - 1);

 return 1;
}

// course solution
bool isPalindromeR(string &s, int start, int end)
{
 if (start >= end)
  return 1;
 return (s[start] == s[end]) && isPalindrome(s, start + 1, end - 1);
}
int main()
{
 string s1 = "abba";
 string s2 = "abbcbba";
 string s3 = "geek";

 cout << isPalindromeR(s1, 0, s1.length() - 1) << endl;
 cout << isPalindromeR(s2, 0, s2.length() - 1) << endl;

 cout << isPalindromeR(s3, 0, s3.length() - 1) << endl;
}