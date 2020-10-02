/*
 This program is the implementation of quick sort algorithm in Java. 
*/

public class QuickSort {

  int partition(int myArr[], int low, int high) {
    int pivotEl = myArr[high]; // Takes last element as pivot element
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
  
  void sort(int myArr[], int low, int high) {
    if (low < high) {
      // pi is the Partition index arr[pi] is now at right place.
      int pi = partition(myArr, low, high);
      sort(myArr, low, pi - 1);
      sort(myArr, pi + 1, high);
    }
  }

  static void printArray(int myArr[]) {
    int arrLen = myArr.length;
    for (int i = 0; i < arrLen; i++) {
      System.out.print(myArr[i] + " ");
    }
    System.out.println("");
  }

  public static void main(String[] args) {
    // System.out.println("Hello World!");
    int unsortedArr[] = { 10, 4, 11, 5, 8 };
    int n = unsortedArr.length;
    QuickSort qsOb = new QuickSort();
    qsOb.sort(unsortedArr, 0, n - 1);

    System.out.println("SortedArray: ");
    printArray(unsortedArr);
  }
}