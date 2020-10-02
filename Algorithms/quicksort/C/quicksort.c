#include<stdio.h>

void swap (int* x,int* y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

int partition (int arr[], int l, int r){
    int i = l-1;
    int j;
    int p = arr[r];
    for (j = l; j < r; j++){
       if (arr[j] <= p){
      	   i++;
           swap(&arr[i],&arr[j]);
       }
    }
    swap(&arr[i+1], &arr[r]);
    return (i+1);
}

void quicksort (int arr[], int l, int r){
  if (l < r){
    int m = (r-l)/2;
    int p1 = partition(arr, l, r);
    quicksort(arr, l, p1-1);
    quicksort(arr, p1+1, r);
  }
}

int main (){
  int a[] = {10, 7, 8, 9, 1, 5};
  int n = sizeof(a)/sizeof(a[0]);
  quicksort(a, 0, n-1);
  for (int i = 0; i < n; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}
