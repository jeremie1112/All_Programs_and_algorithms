public class BinNode<T> {
    protected T data;
    protected BinNode<T> next;
    BinNode<T> prev;

    public BinNode(T data){
        this.data = data;
        next = prev = null;
    }

    public BinNode(T data, BinNode<T> prev, BinNode<T> next){
        this.data = data;
        this.prev = prev;
        this.next = next;
    }

    public void setData(T data) {
        this.data = data;
    }

    public void setNext(BinNode<T> next) {
        this.next = next;
    }

    public void setPrev(BinNode<T> prev) {
        this.prev = prev;
    }


    public T getData() {
        return data;
    }

    public BinNode<T> getNext() {
        return next;
    }

    public BinNode<T> getPrev() {
        return prev;
    }

    @Override
    public String toString() {
        if (data == null) return "null";
        else if (next != null) return data + ">>"+ next.toString();
        else return data+">>null";
    }
}
