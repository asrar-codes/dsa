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

Node *deleteFirstNode(Node *head)
{
 if (head == NULL)
  return NULL;

 else
 {
  Node *newHead = head->next;
  delete head;
  return newHead;
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

 Node *newHead = deleteFirstNode(head);

 printList(newHead);
 return 0;
}