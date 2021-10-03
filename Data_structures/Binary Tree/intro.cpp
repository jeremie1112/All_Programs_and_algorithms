/*           1
                  / \
                 2   3
                /     \
               4       5                                                            */

#include <stdio.h>
struct node
{
    int info;
    node *left;
    node *right;
} * root, *newptr, *ptr, *np;
node *createNode(int);
void insertChild(char, node *, node *);
int main()
{
    root = NULL;

    root = createNode(1);
    newptr = createNode(2);
    insertChild('l', newptr, root);
    newptr = createNode(3);
    insertChild('r', newptr, root);
    newptr = createNode(4);
    insertChild('l', newptr, root->left);
    newptr = createNode(5);
    insertChild('r', newptr, root->right);

    printf("\t\t\t%d\n", root->info);
    printf("\t\t%d", root->left->info);
    printf("\t\t%d\n", root->right->info);
    printf("\t%d", root->left->left->info);
    printf("\t\t\t\t%d", root->right->right->info);

    return 0;
}

node *createNode(int inf)
{
    ptr = new node;
    ptr->info = inf;
    ptr->left = NULL;
    ptr->right = NULL;

    return ptr;
}

void insertChild(char ch, node *np, node *ptr)
{
    if (ch == 'l')
    {
        ptr->left = np;
    }
    else if (ch == 'r')
        ptr->right = np;
}
