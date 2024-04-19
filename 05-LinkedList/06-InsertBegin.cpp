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

Node *insertBegin(Node *head, int x)
{
 Node *temp = new Node(x);

 temp->next = head;
 return temp;
}
int main()
{
 Node *head = new Node(10);
 head->next = new Node(20);
 head->next->next = new Node(30);

 Node *newHead = insertBegin(head, 50);
 cout << newHead->data << " ";

 return 0;
}