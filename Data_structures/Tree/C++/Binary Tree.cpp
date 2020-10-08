//CPP code for implementing a binary tree

#include <bits/stdc++.h> 
using namespace std; 

struct Node { 
	int data; 
	struct Node* left; 
	struct Node* right; 

	Node(int val) 
	{ 
		data = val;  
		left = NULL; 
		right = NULL; 
	} 
}; 

int main() 
{ 

	//create root
	struct Node* root = new Node(1); 
	
	root->left = new Node(2); 
	root->right = new Node(3); 
	root->left->left = new Node(4); 
	root->left->right=new Node(5);
	cout<<"Root Node is: "<<root->data<<endl;
	cout<<"Left child of root node is: "<<root->left->data<<endl;
	cout<<"Right child of root node is: "<<root->right->data<<endl;
	return 0; 
} 

