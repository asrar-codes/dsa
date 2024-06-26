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

Node *reverse(Node *head)
{
 Node *curr = head;
 Node *prev = NULL;
 while (curr != NULL)
 {
  Node *next = curr->next;
  curr->next = prev;
  prev = curr;
  curr = next;
 }
 return prev;
}

int main()
{

 struct Node *head = new Node(10);
 head->next = new Node(20);
 head->next->next = new Node(30);

 return 0;
}