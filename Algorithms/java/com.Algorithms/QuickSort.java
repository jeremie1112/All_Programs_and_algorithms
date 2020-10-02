/*
 This program is the implementation of quick sort algorithm in Java. 
*/

public class QuickSort {

  int partition(int myArr[], int low, int high) {
    int pivotEl = myArr[high];  // Takes last element as pivot element
    int i = low - 1;

    for (int j = low; j < high; j++) {
      if (myArr[j] <= pivotEl) {
        i++;
        // Swap the i and j elements
        int temp = myArr[i];
        myArr[i] = myArr[j];
        myArr[j] = temp;
      }
    }

    // Swap arr[i+1] and arr[high] / Pivot

    int temp = myArr[i + 1];
    myArr[i + 1] = myArr[high];
    myArr[high] = temp;

    return i + 1;
  }
  public static void main(String[] args) {
    System.out.println("Hello World!");
  }
}