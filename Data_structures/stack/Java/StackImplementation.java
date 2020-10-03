
class Node{
	int data;
	Node next;
	Node(int data){
		this.data=data;
		this.next=null;
	}
}
class StackMethods{
	Node head;
	StackMethods(){
		this.head=null;
	}
	public void push(int data){
		Node newNode= new Node(data);
		if(head==null){
			head=newNode;
		}
		else{
			newNode.next=head;
			head=newNode;
		}

	}
	public int pop(){
		if(head==null){
			System.out.println("stack is empty");
		}
		else{
			int temp=head.data;
			head=head.next;
			return temp;
		}
		return -1;		
	}
	public int peek(){
		if(head==null){
			System.out.println("stack is empty");
		}
		else{
			int temp=head.data;
			return temp;
		}
		return -1;	
	}
	public boolean isEmpty(){
		return head==null;
	}
}
public class StackImplementation{
	public static void main(String[] args) {
		StackMethods stack= new StackMethods();
		stack.push(1);
		stack.push(2);
		stack.push(3);
		stack.push(4);
		stack.push(9);
		stack.push(100);
		stack.push(0);
	while(!stack.isEmpty()){
		System.out.println(stack.peek());
		stack.pop();
	 }
	}
}