#include <stdio.h>
#include <stdlib.h>

int main()
{
        int i, j, a, n;
        printf("Enter the value of n \n");
        scanf("%d", &n);
        int array[n];
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &array[i]);

        for (i = 0; i < n; ++i)
        {

            for (j = i + 1; j < n; ++j)
            {

                if (array[i] > array[j])
                {

                    a =  array[i];
                    array[i] = array[j];
                    array[j] = a;

                }

            }

        }

        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d ", array[i]);

    return 0;
}
