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

Node *insertAtPos(Node *head, int x, int pos)
{
 Node *temp = new Node(x);
 if (pos == 1)
 {
  temp->next = head;
  return temp;
 }
 Node *curr = head;
 for (int i = 1; i < pos - 2 && curr != NULL; i++)
  curr = curr->next;
 if (curr == NULL)
  return head;
 temp->next = curr->next;
 curr->next = temp;
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
 Node *newHead = insertAtPos(head, 100, 2);
 newHead = insertAtPos(newHead, 12, 4);
 newHead = insertAtPos(newHead, 45, 3);
 printList(newHead);
 return 0;
}