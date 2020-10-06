import java.util.ArrayList;

public class Heap {
	ArrayList<Integer> arr;

	public Heap() {
		arr = new ArrayList<>();
	}

	public int parent(int i) {
		return (i - 1) / 2;
	}

	public int leftidx(int i) {
		return (2 * i + 1);
	}

	public int rightidx(int i) {
		return (2 * i + 2);
	}

	public int getMin() {
		return arr.get(0);
	}

	public void swap(int idx1, int idx2) {
		int temp = this.arr.get(idx1);
		this.arr.set(idx1, this.arr.get(idx2));
		this.arr.set(idx2, temp);
	}

	public void minHeapify(int i) {
		int left = leftidx(i);
		int right = rightidx(i);
		int smallest = i;
		if (left < this.arr.size() && arr.get(left) < arr.get(smallest)) {
			smallest = left;
		}
		if (right < this.arr.size() && arr.get(right) < arr.get(smallest)) {
			smallest = right;
		}
		if (smallest != i) {
			swap(i, smallest);
			minHeapify(smallest);
		}
	}

	public void insertKey(int key) {
		this.arr.add(key);
		int i = arr.size() - 1;
		while (i != 0 && this.arr.get(parent(i)) > this.arr.get(i)) {
			swap(parent(i), i);
			i = parent(i);
		}
	}

	public void decreaseKey(int i, int key) {
		this.arr.set(i, key);
		while (i != 0 && this.arr.get(parent(i)) > this.arr.get(i)) {
			swap(parent(i), i);
			i = parent(i);
		}
	}

	public int extractMin() {
		int root = this.arr.get(0);
		this.arr.set(0, this.arr.get(arr.size() - 1));
		this.arr.remove(this.arr.size() - 1);
		minHeapify(0);
		return root;
	}

	public void delete(int i) {
		decreaseKey(i, Integer.MIN_VALUE);
		int ext=extractMin();
    }
    public static void main(String[] args) {
        Heap heap=new Heap();
		heap.insertKey(3);
		heap.insertKey(2);
		heap.insertKey(15);
		heap.insertKey(5);
		heap.insertKey(4);
		heap.insertKey(45);
		System.out.println(heap.extractMin());
		System.out.println(heap.getMin());
		System.out.println(heap.arr);
    }
}
