/*
This project sorts an array of integers using the selection sort method, in Java.
*/
import java.util.*;

public class SelectionSort {

	public static int[] SelectionSort(int[] array) {
		int min = 0, index = 0;
		for (int n = 0; n < array.length - 1; n++) {
			index = n;
			for (int i = n + 1; i < array.length; i++) {
				if (array[i] < array[index]) {
					index = i;
				}
				min = array[index];
				array[index] = array[n];
				array[n] = min;
			}
		}
		return array;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// random array to test the command
		int[] array = { 1, 3, 56, 7, 3, 23, 6, 7, 6, 2, 5, 7, 8, 0, 6, 4 };
		System.out.println(Arrays.toString(SelectionSort(array)));
	}
}