#include<iostream>
#include<queue>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
void rightView(Node *root)
{
   // Your Code here
   if(!root)
    return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int currsize=q.size();
        int last=0;
        while(currsize--){
            Node *temp=q.front();
            q.pop();
            last=temp->data;
            if(temp->left)
             q.push(temp->left);
            if(temp->right)
             q.push(temp->right);
        }
        cout<<last<<" ";
    }
}
int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->right=new Node(5);
    return 0;
}