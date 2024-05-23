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

int main()
{

  struct Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  printList(head);
  Node *newHead = reverse(head);
  cout << "reversed list" << endl;
  printList(newHead);

  return 0;
}