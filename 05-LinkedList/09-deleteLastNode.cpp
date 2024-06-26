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

Node *deletelastNode(Node *head)
{
 if (head == NULL)
  return head;
 if (head->next == NULL)
  return NULL;

 Node *curr = head;
 while (curr->next->next != NULL)
 {
  curr = curr->next;
 }
 delete (curr->next);
 curr->next = NULL;
 return head;
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
 head->next->next->next = new Node(40);
 Node *newHead = deletelastNode(head);
 printList(newHead);
 return 0;
}