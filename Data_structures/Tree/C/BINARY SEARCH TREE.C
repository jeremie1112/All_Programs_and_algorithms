/* Binary Search Tree - Basic Opeartions (Variable root declared globally) */

#include  <stdio.h>
#include  <stdlib.h>
#include  <conio.h>
#define  NULL  0

/* Assume that the data portion of each node consists of an integer. */
struct  node
{
  int  data ;
  struct  node  *left  , *right ;
} ;

struct  node  *root = NULL ;
/* root is a global variable and need not be passed to any function. Any changes made to variable root by any of the functions in the program will be permanent and will be reflected in the entire program */

int  ncount , lcount ;

/* This function will insert a new node as a leaf node in the BST */
void  insert(int  x)
{
  struct  node  *pnode , *p , *follow ;

  pnode=(struct node*)malloc(sizeof(struct node)) ;
  if(pnode==NULL)
  {
     printf("\nMemory overflow. Unable to create.") ;
     return ;
  }

  pnode->data=x ;

  /* A new node is always inserted as leaf node */
  pnode->left=pnode->right=NULL ;

  if(root==NULL) /* Tree is empty */
	 root=pnode ;
  else
  {
    /* searching the place of insertion*/
    p=root ;
    follow=NULL ;
    while(p!=NULL)
    {
      follow=p ;
      if(pnode->data<p->data)
	   p=p->left ;
      else
	   p=p->right ;
    }

    /* Actual insertion */
    if(pnode->data<follow->data)
      follow->left=pnode ;
    else
      follow->right=pnode ;
  }
}

/* This function is responsible for creating a BST with multiple nodes */
void  create()
{
  int  x , i , n ;

  printf("Enter the number of nodes required:\n") ;
  scanf("%d",&n) ;

  printf("Enter the data value of each node:\n") ;
  for(i=1 ; i<=n ; i++)
  {
    scanf("%d",&x) ;
    insert(x) ;
  }
}

/* Binary Tree Traversal methods */
void  preorder(struct  node  *root)
{
  if(root!=NULL)
  {
    /* Visit the root */
    printf("%d " , root->data) ;
    /* Traverse the left subtree in preorder */
    preorder(root->left) ;
    /* Traverse the right subtree in preorder */
    preorder(root->right) ;
  }
}

void  inorder(struct  node  *root)
{
  if(root!=NULL)
  {
    inorder(root->left) ;
    printf("%d ", root->data) ;
    inorder(root->right) ;
  }
}

void  postorder(struct  node  *root)
{
  if(root!=NULL)
  {
    postorder(root->left) ;
    postorder(root->right) ;
    printf("%d ", root->data) ;
  }
}

/*
This function will delete a node with value k from BST.
The following are the four cases of deleting a node from BST
1)
The node to be deleted has no children i.e. it is a leaf node.
This is the easiest case in which all we need to do is set the deleted
node's parent to NULL.
2)
The node to be deleted has only a right subtree.
In this case we attach this right subtree to the parent of the deleted node.
3)
The node to be deleted has only a left subtree.
In this case we attach this left subtree to the parent of the deleted node.
4)
The node to be deleted has both subtrees.
This case is the most difficult one to deal with.
*/

void  deletenode(int  k)
{
  struct  node  *p , *follow , *t , *f ;

  /* Searching the node to be deleted */
  p=root ;
  follow=NULL ;
  while(p!=NULL)
  {
    if(p->data==k)
      break ;
    follow=p ;
    if(k<p->data)
      p=p->left ;
    else
      p=p->right ;
  }

  if(p==NULL)
     printf("Required node not found. \n") ;
  else
  {
    /* Actual Deletion */

    /* Deleting a leaf node or a node with empty left subtree */
    if(p->left==NULL)
      if(p!=root)
	   if(follow->left==p)
	     follow->left=p->right ;
	   else
	     follow->right=p->right ;
      else
	  root=p->right ;

    /* Deleting node with empty right subtree */
    else if(p->right==NULL)
	   if(p!=root)
	     if(follow->left==p)
	       follow->left=p->left ;
	     else
	       follow->right=p->left ;
	   else
	     root=p->left ;

    /* Deleting a node with non-empty left and right subtrees */
    else
    {
	 /* finding the inorder successor of p, that is, finding the smallest node in right sub tree of node to be deleted */
     t=p->right ;
     f=p ;
     while(t->left!=NULL)
     {
        f=t ;
	   t=t->left ;
     }
     /* At this stage t is the inorder successor of p and f is the father of t */

      /* put t's data in place of p */
      p->data=t->data ;

      if(f!=p)
	      f->left=t->right ;
      else
	      f->right=t->right ;

	p=t ; /* Useful for free(p) */
    }
    free(p);
  }
}

/* This fn will search a node with value k in BST */
void  search(int  k)
{
  struct  node  *p ;

  /* Searching the required node */
  p=root ;
  while(p!=NULL)
  {
    if(p->data==k)
      break ;
    if(k<p->data)
      p=p->left ;
    else
      p=p->right ;
  }

  if(p==NULL)
      printf("Required node not found. \n") ;
  else
      printf("Node found at address %X. \n",p) ;
}

/* This function will find level of a node with value k */
void  levelnode(int  k)
{
  int  level=0 ;
  struct  node  *p ;

  /* Finding level of the node */
  p=root ;
  while(p!=NULL)
  {
    if(p->data==k)
      break ;
    level++ ;
    if(k<p->data)
      p=p->left ;
    else
      p=p->right ;
  }

  if(p==NULL)
      printf("Required node not found. \n") ;
  else
      printf("Required node found at level %d. \n",level) ;
}

/* This function will count the total no. of nodes in the BST */
void  nodecount(struct  node  *root)
{
  if(root!=NULL)
  {
    nodecount(root->left) ;
    ++ncount ;
    nodecount(root->right) ;
  }
}

/* This function will count the total no. of leaf nodes in the BST. Moreover, it will also display data value of leaf nodes. */
void  leafnodecount(struct  node  *root)
{
  if(root!=NULL)
  {
    leafnodecount(root->left) ;
    if(root->left==NULL && root->right==NULL)
    {
      ++lcount ;
      printf("%d ",root->data) ;
    }
    leafnodecount(root->right) ;
  }
}

/*  This function will find the smallest value in the BST */
void findsmallest()
{
  struct  node  *p ;

  if(root==NULL)
    printf("Tree is empty. \n") ;
  else
  {
    p=root ;
    while(p->left!=NULL)
      p=p->left ;
    printf("Smallest node's data is %d. \n",p->data) ;
  }
}

/*  This function will find the largest value in the BST */
void findlargest()
{
  struct  node  *p ;

  if(root==NULL)
    printf("Tree is empty. \n") ;
  else
  {
    p=root ;
    while(p->right!=NULL)
      p=p->right ;
    printf("Largest node's data is %d. \n",p->data) ;
  }
}

int main()
{
  int  x , k , ch ;

  do
  {
    printf("1.Create. \n") ;
    printf("2.Insert. \n") ;
    printf("3.Preorder. \n") ;
    printf("4.Inorder. \n") ;
    printf("5.Postorder. \n") ;
    printf("6.Delete Node. \n") ;
    printf("7.Search \n") ;
    printf("8.Level Node. \n") ;
    printf("9.Node Count. \n") ;
    printf("10.Leaf Count. \n") ;
    printf("11.Find smallest\n") ;
    printf("12.Find Largest\n") ;
    printf("13.Exit\n") ;

    printf("Enter your choice: ") ;
    scanf("%d",&ch) ;

    switch(ch)
    {
      case 1:
      create() ;
      break ;

      case 2:
      printf("Enter the data value of new node: ") ;
      scanf("%d",&x) ;
      insert(x) ;
      break ;

      case 3:
      preorder(root) ;
      printf("\n") ;
      break ;

      case 4:
      inorder(root) ;
      printf("\n") ;
      break ;

      case 5:
      postorder(root) ;
      printf("\n") ;
      break ;

      case 6:
      printf("Enter data of the node to be deleted: ") ;
      scanf("%d",&k) ;
      deletenode(k) ;
      break ;

      case 7:
      printf("Enter data of the node to be searched: ") ;
      scanf("%d",&k) ;
      search(k) ;
      break ;

      case 8:
      printf("Enter data of the node whose level is to be found: ") ;
      scanf("%d",&k) ;
      levelnode(k) ;
      break ;

      case 9:
      ncount=0 ;
      nodecount(root) ;
      printf("No. of nodes present in the tree are %d \n",ncount) ;
      break ;

      case 10:
      lcount=0 ;
      leafnodecount(root) ;
      printf("No. of Leaf nodes present in the tree are %d \n",lcount) ;
      break ;

      case 11:
      findsmallest() ;
      break ;

      case 12:
      findlargest() ;
      break ;
    }
  }
  while(ch!=13) ;

 getch() ;
}
