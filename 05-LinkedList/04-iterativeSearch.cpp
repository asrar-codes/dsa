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

int searchSLL(Node *head, int x)
{
 Node *curr = head;
 while (curr != NULL)
 {
  if (curr->data == x)
  {
   cout << curr->data << " ";
   return curr->data;
  }
  else
  {
   curr = curr->next;
  }
 }
 return -1;
}

int main()
{

 Node *head = new Node(1);
 head->next = new Node(2);
 head->next->next = new Node(3);

 cout << searchSLL(head, 6);
 return 0;
}