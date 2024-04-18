#include <iostream>

using namespace std;

struct Node
{
 int data;
 Node *next;

 Node(int x)
 {
  data = x;
  next = NULL;
 }
};

int recursiveSearchSLL(Node *head, int x)
{
 if (head == NULL)
  return -1;
 if (head->data == x)
  return head->data;
 else
  return recursiveSearchSLL(head->next, x);
}

int main()
{
 Node *head = new Node(10);
 head->next = new Node(20);
 head->next->next = new Node(30);
 cout << recursiveSearchSLL(head, 40);
 return 0;
}