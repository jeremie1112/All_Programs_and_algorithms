public class AVLTree {
    private int height, key;
    private AVLTree left, right;
    private static final AVLTree NIL = new AVLTree();

    public AVLTree(int key) {
        this.key = key;
        left = right = NIL;
    }

    public AVLTree(int key, AVLTree left, AVLTree right) {
        this.key = key;
        this.left = left;
        this.right = right;
        height = 1 + Math.max(left.height, right.height);
    }

    public AVLTree() {
        left = right = this;
        height = -1;
    }

    public boolean add(int key) {
        int oldSize = size();
        grow(key);
        return size() > oldSize;
    }

    private AVLTree grow(int key) {
        if (this == NIL)
            return new AVLTree(key);
        if (this.key == key)
            return this;// avoid key duplicacy
        if (key < this.key)
            left = left.grow(key);
        else
            right = right.grow(key);
        rebalance();
        height = 1 + Math.max(left.height, right.height);
        return this;
    }

    private void rebalance() {
        if (left.height > right.height + 1) {
            if (left.right.height > left.left.height)
                left.leftRotate();
            rightRotate();
        } else if (right.height > left.height + 1) {
            if (right.left.height > right.right.height)
                right.rightRotate();
            leftRotate();
        }
    }

    private void leftRotate() {
        left = new AVLTree(key, left, right.left);
        key = right.key;
        right = right.right;
    }

    private void rightRotate() {
        right = new AVLTree(key, left.right, right);
        key = left.key;
        left = left.left;
    }

    public int size() {
        if (this == NIL || height == -1)
            return 0;
        return 1 + left.size() + right.size();
    }

    @Override
    public String toString() {
        if (this == NIL)
            return "";
        return "" + left + " " + key + " " + right;
    }

    public static void main(String[] args) {
        AVLTree tree=new AVLTree(4);
    	tree.add(3);
    	tree.add(13);
    	tree.add(11);
    	tree.add(9);
    	tree.add(45);
    	tree.add(5);
    	System.out.println(tree.height);
    	System.out.println(tree);
    }

}