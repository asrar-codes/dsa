#include <iostream>

using namespace std;

struct Node
{
 int data;
 Node *left;
 Node *right;
 Node(int k)
 {
  data = k;
  left = right = NULL;
 }
};

bool search(Node *root, int key)
{
 if (root == NULL)
  return 0;

 if (root->data == key)

  return true;

 else if (root->data < key)

  return search(root->right, key);

 else

  return search(root->left, key);
}

// iterative search
bool searchI(Node *root, int key)
{

 while (root != NULL)
 {
  if (root->data == key)
   return true;
  else if (root->data < key)
   root = root->right;
  else
  {
   root = root->left;
  }
 }
 return 0;
}
int main()
{
 Node *root = new Node(15);
 root->left = new Node(5);
 root->left->left = new Node(3);
 root->right = new Node(20);
 root->right->left = new Node(18);
 root->right->left->left = new Node(16);
 root->right->right = new Node(80);
 cout << search(root, 80) << " " << searchI(root, 80);
}