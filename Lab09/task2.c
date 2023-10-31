/**
 *Programmer: Layyana Junaid	
 *Date: 31 October 2023
 *Description: Lab9 Task1
 /**

#include <stdio.h>

// decalaration of reverse function 
void reverse(int *arr, int size){
	int i; // counter for 'for loop'
	printf("The elements of the array in reverse order are: ");
    for (i = 10 - 1; i >= 0; i--) {
	printf("%d ", arr[i]);
    }
}
int main (void) {
    int arr[10];
    int i; // counter for 'for loop'
    int s;
    printf("Enter the size of array: ");
    scanf("%d",&s);
    for ( i=0; i < 10; i++ ) {
    printf("Enter the elements %d: ", i + 1);
    scanf("%d", &arr[i]);
    }
    reverse(arr,s);
} // end main
                  
