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

void inOrder(Node *root)
{
 if (root != NULL)
 {
  inOrder(root->left);
  cout << root->data << " ";
  inOrder(root->right);
 }
}

// recurive insert

Node *insertR(Node *root, int key)
{
 if (root == NULL)
  return new Node(key);
 else if (root->data < key)
  root->right = insertR(root->right, key);
 else if (root->data > key)
 {
  root->left = insertR(root->left, key);
 }
 return root;
}

// iterative

Node *insert(Node *root, int key)
{
 Node *temp = new Node(key);
 Node *parent = NULL, *curr = root;
 while (curr != NULL)
 {
  parent = curr;
  if (curr->data > key)
   curr = curr->left;
  else if (curr->data < key)
   curr = curr->right;
  else
   return root;
 }
 if (parent == NULL)
  return temp;
 if (parent->data > key)
  parent->left = temp;
 else

  parent->right = temp;

 return root;
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

 inOrder(root);
 Node *root2 = insertR(root, 25);
 Node *root3 = insert(root, 95);
 cout << endl
      << "insertR: ";
 inOrder(root2);
 cout << endl
      << "insertIterative: ";
 inOrder(root3);
}