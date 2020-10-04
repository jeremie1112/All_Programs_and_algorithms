
class Node{
	int data;
	Node right,left;
	Node(int data){
		this.data=data;
		this.right=null;
		this.left=null;
	}
}

public class DfsTraversal{
	static void preOrder(Node root){
		if(root==null)
			return;
		System.out.print(root.data+" ");
		preOrder(root.left);
		preOrder(root.right);
	}
	static void inOrder(Node root){
		if(root==null)
			return;
		inOrder(root.left);
		System.out.print(root.data+" ");
		inOrder(root.right);
	}
	static void postOrder(Node root){
		if(root==null)
			return;
		postOrder(root.left);
		postOrder(root.right);
		System.out.print(root.data+" ");
	}
	public static void main(String[] args) {
		Node root=new Node(1);
		root.left=new Node(2);
		root.right=new Node(3);
		root.left.left=new Node(4);
		root.left.right=new Node(5);

		System.out.print("PreOrder traversal is: ");
		preOrder(root);
		System.out.println();
		System.out.print("Inorder traversal is: ");
		inOrder(root);
		System.out.println();
		System.out.print("PostOrder traversal is: ");
		postOrder(root);
		System.out.println();
	}
}