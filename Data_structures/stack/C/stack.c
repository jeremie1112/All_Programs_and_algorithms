#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// A structure to represent a stack
typedef struct Stack
{
    int data;
    struct Stack* next;
}Stack;

Stack* newNode(int data)
{
    Stack* s=(Stack*)malloc(sizeof(Stack));
    s->data = data;
    s->next = NULL;
    return s;
}

int isEmpty(Stack *root)
{
    return !root;
}

void push(Stack** root, int data)
{
    Stack* Stack = newNode(data);
    Stack->next = *root;
    *root = Stack;
    //printf("%d pushed to stack\n", data);
}

int pop(Stack** root)
{
    if (isEmpty(*root))
        return INT_MIN;
    Stack* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);

    return popped;
}

void print(Stack* s){
  //Prints stack
  while(s!=NULL){
    printf("%d ",s->data);
    s=s->next;
  }
  printf("\n");
}

int main()
{
    Stack* root = NULL;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
    pop(&root);
    print(root);
    //printf("%d popped from stack\n", pop(&root));

    //printf("Top element is %d\n", peek(root));

    return 0;
}
