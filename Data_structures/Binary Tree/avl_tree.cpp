#include<bits/stdc++.h>

using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
    int height;
}*root;

Node* insert(Node*, int);
Node* newNode(int);
int height(Node*);
Node* leftRotate(Node*);
Node* rightRotate(Node*);

void preOrder(Node*);

int main()
{
    root = NULL;

    root = insert(root, 10);
    preOrder(root);
    root = insert(root, 20);
    preOrder(root);
    root = insert(root, 30);
    preOrder(root);
    root = insert(root, 40);
    preOrder(root);
    root = insert(root, 50);
    preOrder(root);
    root = insert(root, 25);

    /* The constructed AVL Tree would be  
                30  
            / \  
            20 40  
            / \ \  
        10 25 50  
    */

   printf("preOrder traversal is : ");

   preOrder(root);

    return 0;
}

Node* insert(Node* node, int key)
{
    if(node == NULL)
        return (newNode(key));
    else if(node->key > key)
        node->left = insert(node->left, key);
    else if(node->key < key)
        node->right = insert(node->right, key);
    else
        return node;
    
    node->height = 1 + max(height(node->left), height(node->right));

    int balance = height(node->left) - height(node->right);

    if(balance > 1)
    {
        // Left-Left case
        if (key > node->left->key)
        {
            return rightRotate(node);
        }
        // Left Right case
        else 
        {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }
    }
    else if(balance < -1)
    {
        // Right-Right case
        if (key > node->right->key)
        {
            return leftRotate(node);
        }
        // Right Left case
        else
        {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }
    }

    return node;
}


Node* newNode(int key)
{
    Node* node = new Node();
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;

    return node;
}

int height(Node* node)
{
    if(node == NULL)
        return 0;

    return node->height;
}

Node* leftRotate(Node* node)
{
    struct Node *temp;
    temp = node->right->left;

    node->right->left = node;
    node->right = temp;

    node->height = 1 + max(height(node->left), height(node->right));
    node->right->height = 1 + max(height(node->right->left), height(node->right->right));

    return node->right;
}

Node* rightRotate(Node* node)
{
    struct Node *temp;

    temp = node->left->right;

    node->left->right = node;
    node->left = temp;

    node->height = 1 + max(height(node->left), height(node->right));
    node->left->height = 1 + max(height(node->left->left), height(node->left->right));

    return node->left;
}

void preOrder(Node * root)
{
    if (root != NULL)
    {
        printf("%d ", root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
}