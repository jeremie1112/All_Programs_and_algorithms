public class linearSearch {
    
  public static int linearSearch(int[] array, int key) {    
            for(int i=0;i<array.length;i++) {    
                if(array[i] == key){    
                    return i;    
                }    
            }    
            return -1;    
  }    
  
  public static void main(String a[]){    

            int[] values= {40,5102,20,43,11,170,32,34,55,90};
            int key = 43;
            if (linearSearch(values,key)==-1) {
               System.out.println("value not found");
            } else {
               System.out.println(key+" is found at index: "+linearSearch(values, key));    
            }
  }    
}    
