#include <iostream>

using namespace std;

struct Node
{
 int key;
 Node *left;
 Node *right;
 Node(int k)
 {
  key = k;
  left = right = NULL;
 }
};

// Inorder Traversal : left root right
void inOrder(Node *root)
{
 if (root != NULL)
 {
  inOrder(root->left);
  cout << root->key << " ";
  inOrder(root->right);
 }
}

// Preorder Traversal: root left right

void preOrder(Node *root)
{
 if (root != NULL)
 {
  cout << root->key << " ";
  preOrder(root->left);
  preOrder(root->right);
 }
}

int main()
{

 Node *root = new Node(10);
 root->left = new Node(20);
 root->right = new Node(30);
 root->right->left = new Node(40);
 root->right->right = new Node(50);
 inOrder(root);
 cout << endl
      << endl;
 preOrder(root);

 return 0;
}