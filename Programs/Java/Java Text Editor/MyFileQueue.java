import java.io.File;

public class MyFileQueue {
	private int size;
	private Node head = new Node(null);
	private Node forRetrieval = head;

	private class Node {
		File file;
		Node prev, next;

		public Node(File file) {
			this.file = file;
			prev = next = this;
		}

		public Node(File file, Node prev, Node next) {
			super();
			this.file = file;
			this.prev = prev;
			this.next = next;
		}

	}

	public void add(File file) {
		head.prev = head.prev.next = new Node(file, head.prev, head);
		size++;
	}

	public File remove() {
		File file = head.next.file;
		head.next = head.next.next;
		head.next.prev = head;
		size--;
		return file;
	}

	public int size() {
		return size;
	}

	public boolean isEmpty() {
		return size == 0;
	}

	public File nextFile() {
		forRetrieval = forRetrieval.next;
		if (forRetrieval == head)
			forRetrieval = forRetrieval.next;
		return forRetrieval.file;
	}

	public File previousFile() {
		forRetrieval = forRetrieval.prev;
		if (forRetrieval == head)
			forRetrieval = forRetrieval.prev;
		return forRetrieval.file;
	}
}
