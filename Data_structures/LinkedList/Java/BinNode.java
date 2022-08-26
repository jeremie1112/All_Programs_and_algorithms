public class BinNode {
    protected int data;
    protected BinNode next;
    protected BinNode prev;

    public BinNode(int data){
        this.data = data;
        next = prev = null;
    }

    public BinNode(int data, BinNode prev, BinNode next){
        this.data = data;
        this.prev = prev;
        this.next = next;
    }

    public void setData(int data) {
        this.data = data;
    }

    public void setNext(BinNode next) {
        this.next = next;
    }

    public void setPrev(BinNode prev) {
        this.prev = prev;
    }


    public int getData() {
        return data;
    }

    public BinNode getNext() {
        return next;
    }

    public BinNode getPrev() {
        return prev;
    }

}
