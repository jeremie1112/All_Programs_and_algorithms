package sorting;

public class selection {
	static int[] select(int a[], int n) {
		for (int i = 0; i < n; i++) {
			int min = i;
			for (int j = i + 1; j < n; j++) {
				if (a[j] < a[min]) {
					min = j;
				}
			}
			if (min != i) {
				int temp = a[i];
				a[i] = a[min];
				a[min] = temp;
			}
		}

		return a;

	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int a[] = { 2, 7, 4, 15, 9 };
		int n = a.length;
		select(a, n);
		for (int i = 0; i < n; i++) {

			System.out.println(a[i]);

		}
	}

}
