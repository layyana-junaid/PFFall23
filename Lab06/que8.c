/**
 * Programmer: Layyana Junaid
 * Desc: Question 8
 * Date: 9/10/23
 *
 */

#include <stdio.h>

int main (void) {
              int array[100];
              int n;
              printf("Enter the size of array: ");
              scanf("%d", &n);
             for ( int i=0; i < n; i++ ) {
            printf("Enter the elements %d: ", i + 1);
            scanf("%d", &array[i]);
             }
              printf("The elements of the array in reverse order are: ");
               for (int i = n - 1; i >= 0; i--) {
                     printf("%d ", array[i]);
                }
                 printf("\n");
} // end main
                  