#include <stdio.h>

int main() {
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int loop;

   for(loop = 9; loop >= 0; loop--)
      printf("%d ", array[loop]);
      
   return 0;
}
