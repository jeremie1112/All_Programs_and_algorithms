public class InsertionSorting {
	
	private int[] array;

	public InsertionSorting() {
		setArray();
	}

	public static void main(String[] args) {
		InsertionSorting is = new InsertionSorting();
		System.out.println("Before Sorting array is");
		is.printTheArray();
		is.sortTheArray();
		System.out.println("After Sorting array is");
		is.printTheArray();
	}
	
	private void printTheArray() {
		for(int i=0; i<array.length; i++) {
			System.out.print(array[i]+" ");
		}
		System.out.println();
	}

	private void sortTheArray() {	
		int i,j, index;
		
		for(i=0; i<array.length; i++) {
			index = array[i]; 
            j = i - 1; 
            
            while (j > -1 && array[j] > index) { 
                array[j + 1] = array[j]; 
                j--; 
            } 
            
            array[j + 1] = index;
		}
	}

	private void setArray() {
		int[] a = {72,21,69,38,96,77,30,19,42,55,99};
		array = a;
	}
}
