// O(n)

#include <bits/stdc++.h>

using namespace std;

struct node
{
    char data;
    node *left;
    node *right;
} * root;

node *create_new_node(char);

void InorderTraversal(node *);
void PreorderTraversal(node *);
void PostorderTraversal(node *);
void LevelorderTraversal(node *);

int main()
{
    root = NULL;

    root = create_new_node('A');
    root->left = create_new_node('B');
    root->right = create_new_node('C');
    root->left->left = create_new_node('D');
    root->left->right = create_new_node('E');
    root->left->right->left = create_new_node('F');

    printf("Depth Level Traversal\n");
    printf("Inorder Traversal     : ");
    InorderTraversal(root);
    printf("\n");
    printf("Preorder Traversal    : ");
    PreorderTraversal(root);
    printf("\n");
    printf("Postorder Traversal   : ");
    PostorderTraversal(root);
    printf("\n\n");

    printf("Breadth Level Traversal\n");
    printf("Levelorder Traversal  : ");
    LevelorderTraversal(root);
    printf("\n");

    return 0;
}

node *create_new_node(char ch)
{
    node *n = new node;
    n->data = ch;
    n->left = NULL;
    n->right = NULL;

    return n;
}

void InorderTraversal(node *n)
{
    if (n == NULL)
        return;

    InorderTraversal(n->left);

    printf("%c ", n->data);

    InorderTraversal(n->right);
}

void PreorderTraversal(node *n)
{
    if (n == NULL)
        return;

    printf("%c ", n->data);

    PreorderTraversal(n->left);

    PreorderTraversal(n->right);
}

void PostorderTraversal(node *n)
{
    if (n == NULL)
        return;

    PostorderTraversal(n->left);

    PostorderTraversal(n->right);

    printf("%c ", n->data);
}

void LevelorderTraversal(node *n)
{
    queue<node *> s;
    node *p;

    s.push(n);

    while (!s.empty())
    {
        p = s.front();
        s.pop();
        if (p->left != NULL)
            s.push(p->left);
        if (p->right != NULL)
            s.push(p->right);
        printf("%c ", p->data);
    }
}