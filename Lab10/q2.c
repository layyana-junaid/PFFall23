/**
  * Programmer: Layyana Junaid
  * Date: 20th Novemeber 2023
  * Description: Lab10 Question 02
  * 
  **/

#include <stdio.h>

// Function to swap integers
void swap( int*n1, int*n2 ) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}// end swap 

 int main () {
    int num1 = 6; // number 1
    int num2 = 12; // number 2
    // displaying original format of numbers
    
    printf("Original placement Number 1: %d and Number 2: %d\n",num1,num2);
    
    // swaping the numbers
     
    swap(&num1,&num2);
    
    printf("Swaped placement Number 1: %d and Number 2: %d\n",num1,num2);
    
    return 0;
    
 } // end main
