*Programmer: Layyana Junaid
*Date: 29th October 2023
*Description: Assignment 2 Question 6
	
#include <stdio.h>

int main () {

int n, t; // n is the size of array and t is the targeted integer
int arr[100]; // array of n integers

printf("Enter the size of array: ");
scanf("%d",&n);
printf("Enter the Target integer:");
scanf("%d",&t);

int i, j; // counter for 'for loop'
for( i = 0; i < n; i++ ) {
	printf("Enter the value of %d: ", i + 1);
	scanf("%d",&arr[i]);
}

int r; //
for( i = 0; i < n; i++ ) {
if( arr[i] == r ) 
continue;
for( j = 0; j < n; j++ ) {
if( arr[i] + arr[j] == t ) {
r = arr[j];
 printf("(%d,%d)", arr[i], arr[j]);
}
}
}
} // end main 

