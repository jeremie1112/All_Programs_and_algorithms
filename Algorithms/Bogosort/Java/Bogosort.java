public class BogoSort {
    // Sorts array using Bogo sort
    void bogoSort(int[] a)
    {
        // if array is not sorted then shuffle the array again
       
        while (isSorted(a) == false)
            shuffle(a);
    }
 
    // To generate random combination of the array
    void shuffle(int[] a)
    {
       
        for (int i = 0; i < a.length; i++)
            swap(a, i, (int)(Math.random() * i));
    }
 
    // Swap 2 elements
    void swap(int[] a, int i, int j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
 
    //  check if array is sorted or not
    boolean isSorted(int[] a)
    {
        for (int i = 1; i < a.length; i++)
            if (a[i] < a[i - 1])
                return false;
        return true;
    }
 
    // Print the array
    void printArray(int[] arr)
    {
        for (int i = 0; i < arr.length; i++)
            System.out.print(arr[i] + " ");
        System.out.println();
    }
 
    public static void main(String[] args)
    {
        // Enter array to be sorted here
        int[] a = { 3, 2, 5, 1, 0, 4 };
        BogoSort ob = new BogoSort();
 
        ob.bogoSort(a);
 
        System.out.print("Sorted array: ");
        ob.printArray(a);
    }
}
