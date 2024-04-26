#include <iostream>
using namespace std;

// Nth Node from the end of Linked List
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

void printList(Node *head)
{
 if (head == NULL)
  return;
 Node *curr = head;
 while (curr != NULL)
 {
  cout << curr->data << " ";
  curr = curr->next;
 }
}

void printNthNode(Node *head, int n)
{
 if (head == NULL)
  return;

 int length = 0;
 for (Node *curr = head; curr != NULL; curr = curr->next)
 {
  length++;
 }
 if (length < n)
  return;
 Node *curr = head;
 for (int i = 1; i < length - n + 1; i++)
 {
  curr = curr->next;
 }
 cout << curr->data << " ";
}

// Nth Node from end using two pointers;
void printNthWithTwoPointers(Node *head, int n)
{
 if (head == NULL)
  return;
 Node *first = head;
 for (int i = 0; i < n; i++)
 {

  {
   if (first == NULL)
    return;
   first = first->next;
  }
 }
 Node *second = head;
 while (first != NULL)
 {
  second = second->next;
  first = first->next;
 }
 cout << second->data << " ";
}
int main()
{
 Node *head = new Node(10);
 head->next = new Node(20);
 head->next->next = new Node(30);
 head->next->next->next = new Node(40);
 // printList(head);
 printNthNode(head, 1);
 printNthWithTwoPointers(head, 1);

 return 0;
}