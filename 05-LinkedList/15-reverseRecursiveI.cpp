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

Node *recRevL(Node *head)
{
 if (head == NULL || head->next == NULL)
 {
 }
}
int main()
{

 return 0;
}