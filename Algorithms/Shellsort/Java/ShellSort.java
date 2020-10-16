public class ShellSort {
	public static <T extends Comparable<? super T>> void sort(T[] array) {
		int[] gaps = { 701, 301, 132, 57, 23, 10, 4, 1 };
		int n = array.length;
		for (int gap : gaps) {

			for (int i = gap; i < n; i += 1) {

				T temp = array[i];
				int j;
				for (j = i; j >= gap && array[j - gap].compareTo(temp) > 0; j -= gap) {
					array[j] = array[j - gap];
				}
				array[j] = temp;
			}
		}
	}


	public static void main(String[] args) {
		Integer[] intTest = new Integer[] { 6, 3, 8, 1, 9, 2, 4, 5, 0, 7 };
		String[] stringTest = new String[] { "c", "f", "z", "k", "a", "l", "v",
				"a", "b", "y", "z" };

		sort(intTest);
		for (Integer v : intTest) {
			System.out.print(v + " ");
		}
		System.out.println();
		sort(stringTest);
		for (String v : stringTest) {
			System.out.print(v + " ");
		}
	}
}
