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

void printList(Node *head)
{

 Node *curr = head;
 while (curr != NULL)
 {
  cout << (curr->data) << " ";
  curr = curr->next;
 }
}

int main()
{

 // Node *head = new Node(10);
 // Node *temp1 = new Node(20);
 // Node *temp2 = new Node(30);

 /*

 When we write head->next, we are saying "go to the memory location that head is pointing to, and then access the next member of the object stored at that memory
 location."
 If we were not working with a pointer but with an actual object (not a pointer to an    object), we would use the dot operator like this:
 head.next

 In C++, the dot operator (.) has higher precedence than the dereference operator (*).   So, if you write
 *head.next, it will be interpreted as *(head.next) which means you are trying to        dereference the next member of head, which is not correct because head itself is a      pointer.

 To access the next member of the object that head is pointing to, you should use the    arrow operator (->). Therefore, in this context, you should use head->next to           correctly access the next member of the object that head is pointing to.

 */

 //  head->next = temp1;
 //  temp1->next = temp2;
 //  printList(head);

 // another implmentation

 Node *head = new Node(10);
 head->next = new Node(20);
 head->next->next = new Node(30);

 Node linked = Node(10);
 *linked.next = Node(20);
 *linked.next->next = Node(40);
 Node *ptr = &linked;

 printList(head);
 printList(ptr);
 return 0;
}
