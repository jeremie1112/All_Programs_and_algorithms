public class MyFileStack {
	private int size;
	private Node top;
	private Node forRetrieval = top;
	private class Node {
		String text;
		Node next;

		public Node(String text, Node next) {
			super();
			this.text = text;
			this.next = next;
		}
	}
	public boolean push(String text) {
		if (this.toString().contains(text)) {
			if(top!=null) {
				String t = top.text;
				Node p = top;
				while (!p.next.text.equals(text)) {
					p = p.next;
				}
				top.text = p.next.text;
				p.next.text = t;
				return false;
			}
		}
		top = new Node(text, top);
		size++;
		return true;
	}
	public String pop() {
		if (top == null)
			return "";
		String text = top.text;
		top = top.next;
		size--;
		return text;
	}

	public int size() {
		return size;
	}

	public boolean isEmpty() {
		return size == 0;
	}

	public String peek() {
		if (top == null)
			return "";
		return top.text;
	}


	public void pushAtFirst(String text) {
		if (top == null) {
			top = new Node(text, null);
			size++;
			return;
		}
		Node i = top;
		if (top.next == null) {
			top.next = new Node(text, null);
			size++;
			return;
		}
		while (i.next.next != null) {
			i = i.next;
		}
		i.next = new Node(text, null);
	}

	public void removeAtFirst() {
		if (top == null) {
			return;
		}
		Node i = top;
		if (top.next == null) {
			return;
		}
		while (i.next.next != null) {
			i = i.next;
		}
		i.next = null;
	}

	public String nextData() {
		if (forRetrieval == null)
			return "";
		String text = forRetrieval.text;
		forRetrieval = forRetrieval.next;
		return text;
	}

	public boolean setAgainAtStart() {
		forRetrieval = top;
		return true;
	}

	@Override
	public String toString() {
		String buf = "";
		for (Node i = top; i != null; i = i.next) {
			buf += (i.text + " ");
		}
		return buf;
	}

}
