import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Arrays;

public class Quick_Sort {
	public static void main(String[] args) throws IOException {
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		System.out.print("\nEnter the elements of the array: ");
		int[] array = Arrays.stream(reader.readLine().trim().split("\\s+")).mapToInt(Integer::parseInt).toArray();
		reader.close();

		System.out.print("\nGiven array: ");
		printArray(array);

		quickSort(array, 0, array.length - 1);

		System.out.print("\nSorted array: ");
		printArray(array);
	}

	public static void printArray(int[] array) {
		System.out.println(Arrays.toString(array));
	}

	public static void quickSort(int[] array, int start, int end) {
		if (start < end) {
			int pivotPosition = partition(array, start, end);
			quickSort(array, start, pivotPosition - 1);
			quickSort(array, pivotPosition + 1, end);
		}
	}

	public static int partition(int[] array, int start, int end) {
		int index = start + 1;
		int pivot = array[start];

		for (int iterator = start + 1; iterator <= end; ++iterator)
			if (array[iterator] < pivot) {
				swap(array, index, iterator);
				++index;
			}

		swap(array, start, index - 1);
		return index - 1;
	}

	public static void swap(int[] array, int left, int right) {
		int temp = array[left];
		array[left] = array[right];
		array[right] = temp;
	}
}
