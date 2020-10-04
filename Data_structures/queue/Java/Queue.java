class Node{
	int data;
	Node next;
	Node(int data){
		this.data=data;
		this.next=null;
	}
}

class QueueMethods{
    Node head;
    Node tail;
    QueueMethods(){
        this.head=null;
        this.tail=null;
    }
    public void enqueue(int n){
        if(head==null){
            head=new Node(n);
            tail=head;
            return;
        }
        Node newNode=new Node(n);
        tail.next=newNode;
        tail=tail.next;
    }
    public int dequeue(){
        if(head==null){
            System.out.println("Queue Empty");
            return -1;
        }
        int retVal=head.data;
        head=head.next;
        return retVal;
    }
    public int peek(){
        if(head==null){
            System.out.println("Queue Empty");
            return -1;
        }
        return head.data;
    }
    public boolean isEmpty(){
        if(head==null){
            return true;
        }else return false;
    }
}
public class Queue{
	public static void main(String[] args) {
		QueueMethods queue= new QueueMethods();
            queue.enqueue(1);
            queue.enqueue(2);
            queue.enqueue(3);
            queue.enqueue(4);
            queue.enqueue(9);
            queue.enqueue(10);
        while(!queue.isEmpty()){
            System.out.println(queue.peek());
            queue.dequeue();
        }
    }
}