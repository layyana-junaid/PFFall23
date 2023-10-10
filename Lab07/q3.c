/**
 * Programmer: Layyana Junaid
 * Desc: Question 3 Lab07
 * Date: 10/10/23
 *
 */

#include <stdio.h>

int main (void) {
            int arrofNumbers[10];
            int sum = 0;
            
            printf("Enter the elements of the array: ");
           for ( int i=0; i < 10; i++ ) {
            scanf("%d", &arrofNumbers[i]);
           }
           for ( int i=0; i < 10; i++ ) {
             sum = sum + arrofNumbers[i];
           }
          
        printf("The sum of the elements in the array is : %d\n", sum);
       
} // end main 
