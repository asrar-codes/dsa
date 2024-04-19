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

void insertTail(Node *head, int x)
{
 Node *temp = new Node(x);
 if (head == NULL)
 {
  head = temp;
 }
 else
 {
  Node *curr = head;
  while (curr->next != NULL)
  {
   curr = curr->next;
  }

  curr->next = temp;
 }
}

void printList(Node *head)
{
 Node *curr = head;
 while (curr != NULL)
 {
  cout << curr->data << " ";
  curr = curr->next;
 }
}

int main()
{
 Node *head = new Node(10);
 head->next = new Node(20);
 head->next->next = new Node(30);

 insertTail(head, 50);
 printList(head);
 return 0;
}