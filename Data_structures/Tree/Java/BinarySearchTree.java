class Node{
    int data;
    Node right;
    Node left;
    Node(int data){
        this.data=data;
        this.right=null;
        this.left=null;
    }
}
public class BinarySearchTree{
    static Node insertNode(Node root,int data){
        if(root==null){
            return new Node(data);
        }
        else if(root.data>=data){
            root.left=insertNode(root.left,data);
        }
        else if(root.data<data){
            root.right=insertNode(root.right,data);
        }
        return root;
    }
    static void inorderTraversal(Node root){
        if(root==null)
        return;
        inorderTraversal(root.left);
        System.out.print(root.data+" ");
        inorderTraversal(root.right);
    }
    public static void main(String[] args) {
        Node root=null;
        root=insertNode(root,50);
        insertNode(root,30);
        insertNode(root,20);
        insertNode(root,40);
        insertNode(root,70);
        insertNode(root,60);
        insertNode(root,80);
        inorderTraversal(root);
        System.out.println();
    }
}