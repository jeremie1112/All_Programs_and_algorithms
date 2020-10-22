package Algorithms.RadixSort.Java;

import java.util.Arrays;

public class RadixSort {
    public void sort(int[] arr) {
        RadixSort.radixSort(arr);
    }

    public static int getMax(int[] arr) {
        int max = arr[0];

        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > max) max = arr[i];
        }

        return max;
    }

    public static int calculateNumDigits(int num) {
        return (int) Math.log10(num) + 1;
    }

    public static void radixSort(int[] arr) {
        if (arr == null || arr.length <= 1) return;

        int max = getMax(arr);
        int numDigits = calculateNumDigits(max);
        int placeValue = 1;

        while (numDigits > 0) {
            countSort(arr, placeValue);
            placeValue *= 10;
            numDigits--;
        }
    }

    public static void countSort(int[] arr, int placeValue) {
        int range = 10;

        int[] frequency = new int[range];
        int[] sortedValues = new int[arr.length];

        for (int i = 0; i < arr.length; i++) {
            int digit = (arr[i] / placeValue) % range;
            frequency[digit]++;
        }

        for (int i = 1; i < range; i++) {
            frequency[i] += frequency[i - 1];
        }

        for (int i = arr.length - 1; i >= 0; i--) {
            int digit = (arr[i] / placeValue) % range;
            sortedValues[frequency[digit] - 1] = arr[i];
            frequency[digit]--;
        }

        for (int i = 0; i < arr.length; i++) {
            arr[i] = sortedValues[i];
        }
    }

    public static void main(String[] args) {
        RadixSort radixSorter = new RadixSort();
        int[] arr = {5, 4, 6, 0, 11, 7, 12, 10, 9, 3, 1, 8, 2};

        System.out.println("Original array: " + Arrays.toString(arr));
        radixSorter.sort(arr);
        System.out.println("\nSorted array: " + Arrays.toString(arr));
    }
}