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

// Postorder Traversal : left right root

void postOrder(Node *root)
{
     if (root != NULL)
     {
          postOrder(root->left);
          postOrder(root->right);
          cout << root->key << " ";
     }
}

int main()
{

     /*  Node *root = new Node(10);
      root->left = new Node(20);
      root->right = new Node(30);
      root->right->left = new Node(40);
      root->right->right = new Node(50); */

     Node *root = new Node(10);
     root->left = new Node(20);
     root->left->left = new Node(40);
     root->left->right = new Node(50);
     root->left->right->left = new Node(70);
     root->left->right->right = new Node(80);
     root->right = new Node(30);
     root->right->right = new Node(60);
     cout << "InOrder: ";
     inOrder(root);
     cout << endl;
     cout << "PreOrder: ";
     preOrder(root);
     cout << endl;
     cout << "PostOrder: ";
     postOrder(root);

     return 0;
}