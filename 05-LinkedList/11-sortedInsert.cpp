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

Node *insertSorted(Node *head, int x)
{
 Node *temp = new Node(x);
 if (head == NULL)
  return temp;
 if (head->data > x)
 {
  temp->next = head;
  return temp;
 }
 else
 {
  Node *curr = head;
  while (curr->next != NULL && curr->next->data < x)
   curr = curr->next;
  temp->next = curr->next;
  curr->next = temp;
  return head;
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
 head->next->next->next = new Node(40);
 Node *newHead = insertSorted(head, 2);
 newHead = insertSorted(newHead, 112);
 newHead = insertSorted(newHead, 45);
 printList(newHead);
 return 0;
}