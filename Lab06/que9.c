/**
 * Programmer: Layyana Junaid
 * Desc: Question 9
 * Date: 9/10/23
 *
 */

#include <stdio.h>
 
int main (void) {
          int array[100];
          int n; // the length of array 
          int min, max;
          
          printf("Enter the size of the array: ");
          scanf("%d", &n);
          
        for (int i = 0; i < n; i++) {
             printf("Enter element %d: ", i + 1);
             scanf("%d", &array[i]);
          }
            min = array[0]; // initiallizing minimum
            max = array[0]; // initiallizing maximum 
        
       for (int i = 1; i < n; i++) {
           if (array[i] < min ) {
               min = array[i];
              }
       else if (array[i] > max) {
                 max = array[i];
              }
        }     
             printf("The maximum element of the array is %d\n", max);
             printf("The minimum element of the array is %d\n", min);
          

} // end main 