public class BinarySearchTree {
    int key;
    BinarySearchTree left, right;

    public BinarySearchTree(int key) {
        this.key = key;
    }

    public boolean insert(int key) {
        if (key == this.key)
            throw new IllegalArgumentException("Key can't be duplicate!");
        if (key < this.key) {
            if (left != null)
                return left.insert(key);
            else {
                left = new BinarySearchTree(key);
                return true;
            }

        }
        if (key > this.key) {
            if (right != null)
                return right.insert(key);
            else {
                right = new BinarySearchTree(key);
                return true;
            }

        }
        return false;
    }

    public boolean delete(int key) {
        //if(key==this.key)
            
        return false;
    }

    /*private int findMin(BinarySearchTree tree) {
        if (tree == null)
            throw new IllegalStateException("Exception occurred!");
        if (tree.left == null && tree.right == null)
            return tree.key;
        return findMin(left);
    }*/

    public boolean contains(int key) {
        // return this.inOrder().contains(key + "");
        if (this.key == key)
            return true;
        if (left != null && right == null)
            return left.contains(key);
        if (right != null && left == null)
            return right.contains(key);
        if (right != null && left != null)
            return right.contains(key) || left.contains(key);
        return false;
    }

    public String inOrder() {
        String buf = "";
        if (left != null)
            buf += left.inOrder() + ",";
        buf += key;
        if (right != null)
            buf += "," + right.inOrder();
        return buf;
    }

    public int height() {
        if (left == null && right == null)
            return 0;
        int lefts = 0, rights = 0;
        if (left != null)
            lefts = left.height();
        if (right != null)
            rights = right.height();
        return 1 + ((lefts > rights) ? lefts : rights);
    }

    public int size() {
        if (left == null && right == null)
            return 1;
        int size = 0;
        if (left != null)
            size += left.size();
        if (right != null)
            size += right.size();
        return 1 + size;
    }

}