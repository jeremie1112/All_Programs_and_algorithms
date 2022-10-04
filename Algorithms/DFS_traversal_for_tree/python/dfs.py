class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None

# left, root, right
def inorder(root):
    if not root:
        return    
    inorder(root.left)
    print(root.val)
    inorder(root.right)
# root, left, right
def preorder(root):
    if not root:
        return    
    print(root.val)
    preorder(root.left)
    preorder(root.right)

# left, right, root 
def postorder(root):
    if not root:
        return    
    postorder(root.left)
    postorder(root.right)
    print(root.val)


def main():
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.left = TreeNode(4)
    root.left.right = TreeNode(5)

    print("Post Order: \n", postorder(root))
    print("In Order: \n", inorder(root))
    print("Pre Order: \n", preorder(root))



if __name__ == "__main__":
    main()