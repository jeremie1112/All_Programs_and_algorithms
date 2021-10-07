# Code by : https://github.com/MaxTronn

#This program creates a Binary Search Tree and does inorder, preorder and postorder traversals of the tree
class Node:
    def __init__(self, data):
        self.left = None
        self.right = None
        self.data = data

# This function inserts a value in the Binary Search Tree
def insert(root, item):
    if root is None:
        return Node(item)
    else:
        if root.data == item:
            return root
        elif root.data < item:
            root.right = insert(root.right, item)
        else:
            root.left = insert(root.left, item)
    return root

# In inorder traversal, we traverse the tree in the order: left -> root -> right
def inorderTraversal(root):
    if root:
        inorderTraversal(root.left)
        print(root.data)
        inorderTraversal(root.right)

# In preorder traversal, we traverse the tree in the order: root -> left -> right
def preorderTraversal(root):
    if root:
        print(root.data)
        preorderTraversal(root.left)
        preorderTraversal(root.right)

# In postorder traversal, we traverse the tree in the order: left -> right -> root
def postorderTraversal(root):
    if root:
        postorderTraversal(root.left)
        postorderTraversal(root.right)
        print(root.data)


tree = Node(100)
tree = insert(tree, 80)
tree = insert(tree, 150)
tree = insert(tree, 30)
tree = insert(tree, 90)
tree = insert(tree, 130)
tree = insert(tree, 190)

print("Inorder Traversal of the tree gives :")
inorderTraversal(tree)

print("\nPreorder Traversal of the tree gives :")
preorderTraversal(tree)

print("\nPostorder Traversal of the tree gives :")
postorderTraversal(tree)
