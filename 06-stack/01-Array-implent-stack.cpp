#include <iostream>

using namespace std;

struct MyStack
{
 int *arr;
 int cap;
 int top;

 MyStack(int c)
 {
  cap = c;
  arr = new int[cap];
  top = -1;
 }

 void push(int x)
 {
  if (top == cap - 1)
  {
   cout << "stack is already full" << endl;
   return;
  }
  top++;
  arr[top] = x;
 }
 int pop()
 {
  if (top < 0)
  {
   cout << "stack underflow" << endl;
   return INT_MAX;
  }
  int res = arr[top];
  top--;
  return res;
 }
 int peek()
 {
  if (top == 0)
  {
   cout << "stack is empty" << endl;
  }
  return arr[top];
 }
 int size()
 {
  return top + 1;
 }
 bool isEmpty()
 {
  return (top == -1);
 }
};

int main()
{
 struct MyStack s(5);
 cout << s.pop() << endl;
 cout << s.peek() << endl;
 s.push(10);
 s.push(20);
 s.push(30);
 s.push(40);
 s.push(50);
 // s.push(60);
}