/**
 *Programmer: Layyana Junaid	
 *Date: 31 October 2023
 *Description: Lab9 Task1
 /**

#include <stdio.h>

int main () {
	int N; // size of the array
	printf("Enter the size of array: ");
    scanf("%d", &N);
	int arr[N];
	int i;// counter for 'for loop'
	long long int Longintarr[N]; 
	char chararr[N];
	int *ptr; // to read the address of differesnt variables
	printf("--The integer array--\n");
	for ( i=0; i < N; i++ ) {
    printf("Enter the elements %d: ", i + 1);
    scanf("%d", &arr[i]);
    }
    for ( i=0; i < N; i++ ){
    	printf("{%d} \n", arr[i]);
	}
	printf("--The character array--\n");
    for ( i=0; i < N; i++ ) {
    printf("Enter the elements %d: ", i + 1);
    scanf(" %c", &chararr[i]);
    }
    for ( i=0; i < N; i++ ){
    	printf("{%c} \n", chararr[i]);
	}
    printf("--The long long integer array--\n");
    for ( i=0; i < N; i++ ) {
    printf("Enter the elements %d: ", i + 1);
    scanf("%lld", &Longintarr[i]);
    }
    for ( i=0; i < N; i++ ){
    	printf("{%lld} \n", arr[i]);
	}
     
    return 0;
} //
