public class merge_sort {
    public static int[] merge_two_sorted_arrays(int[] arr1,int[] arr2){
        int result_arr[]=new int[arr1.length+arr2.length];
        int i=0;
        int j=0;
        int k=0;
        while(i<arr1.length&&j<arr2.length){
            if(arr1[i]<=arr2[j]){
                result_arr[k]=arr1[i];
                k++;
                i++;
            }else{
                result_arr[k]=arr2[j];
                k++;
                j++;
            }
        }
        while(i<arr1.length){
            result_arr[k]=arr1[i];
            k++;
            i++;
        }
        while(j<arr2.length){
            result_arr[k]=arr2[j];
            k++;
            j++;
        }
        return result_arr;
    }

    public static int[] mergeSort(int[] arr,int start_index,int last_index){
        if(start_index==last_index){
            int [] result=new int[1];
            result[0]=arr[start_index];
            return result;
        }
        int mid=(start_index+last_index)/2;
        int[] first_half=mergeSort(arr, start_index, mid);
        int[] second_half=mergeSort(arr, mid+1, last_index);
        int[] sorted_arr=merge_two_sorted_arrays(first_half, second_half);
        return sorted_arr;
    }
    public static void main(String[] args) {
        int[] arr={1,4,2,3,5,7,3,4,7,9,6,8,10};
        int[] sorted_arr=mergeSort(arr, 0, arr.length-1);
        for(int i:sorted_arr){
            System.out.print(i+" ");
        }   
    }
}