public class BubbleSort {
    public static <T extends Comparable<? super T>> void sort(T[] array) {
        int i = 0, j;
        while (i < array.length) {
            j = array.length - 1;
            while (j > i) {
                if (array[j].compareTo(array[j - 1]) < 0) {
                    swap(array, j, j - 1);
                }
                --j;
            }
            ++i;
        }
    }

    private static <T> void swap(T[] array, int i, int j) {
        T temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

    public static void main(String[] args) {
        Integer[] intTest = new Integer[]{6, 3, 8, 1, 9, 2, 4, 5, 0, 7};
        String[] stringTest = new String[]{"c", "f", "z", "k", "a", "l", "v", "a", "b", "y", "z"};

        sort(intTest);
        for (var v : intTest) {
            System.out.println(v);
        }

        sort(stringTest);
        for (var v : stringTest) {
            System.out.println(v);
        }
    }
}