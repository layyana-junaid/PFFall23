/**
 * Programmer: Layyana Junaid
 * Desc: Question 3 Lab07
 * Date: 10/10/23
 *
 */

#include <stdio.h>

int main (void) {
            int arrofNumbers[100];
            int sum = 0;
            int n; // size of array
             
           printf("Enter the size of array: ");
           scanf("%d",&n);
            
           printf("Enter the elements of the array: ");
              for ( int i=0; i < n; i++ ) {
              scanf("%d", &arrofNumbers[i]);
           }
           for ( int i=0; i < n; i++ ) {
             sum = sum + arrofNumbers[i];
           }
          
        printf("The sum of the elements in the array is : %d\n", sum);
       
} // end main 