 *Programmer: Layyana Junaid
 *Date: 24th October 23
 *Desc: Question 1
 
#include <stdio.h>

// Function to swap integers
void swap( int*n1, int*n2 ) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
 int main () {
 	int num1; // number 1
 	int num2; // number 2
 	
 	printf("Enter the first integer: ");
 	scanf("%d",&num1);
 	printf("Enter the second integer: ");
 	scanf("%d",&num2);
 	
 	// displaying original format of numbers
 	
 	printf("Original placement Number 1: %d and Number 2: %d\n",num1,num2);
    
	// swaping the numbers
	 
	swap(&num1,&num2);
	
	printf("Swaped placement Number 1: %d and Number 2: %d\n",num1,num2);
	
    return 0;
 	
 } // end main

