#include <stdio.h>

void bubbleSort (int array[], int size) 
{
   for (int step = 0; step < size - 1; ++step) {
      for (int i = 0; i < size - step - 1; ++i) { 
	   if (array[i] > array[i + 1]) {

	      // swap if greater is at the rear position
	      int temp = array[i];
	      array[i] = array[i + 1];
	      array[i + 1] = temp;
	   }
	  }
  }
}

// function to print the array
void printArray (int array[], int size)
{
  for (int i = 0; i < size; ++i) {
      printf ("%d  ", array[i]);
  }
  printf ("\n");
}

// main
int main ()
{
  int n;
  printf ("Enter number of elements to be Sorted ");
  scanf ("%d", &n);
  int data[n];
  for (int i = 0; i < n; i++) {
      printf ("Enter element %d ", i + 1);
      scanf ("%d", &data[i]);
   }
  printArray (data, n);
  bubbleSort (data, n);
  printf ("Sorted Array in Ascending Order:\n");
  printArray (data, n);
}
