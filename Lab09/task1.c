/**
 *Programmer: Layyana Junaid	
 *Date: 31 October 2023
 *Description: Lab9 Task1
 /**

#include<stdio.h>

// the code which was previously given to us was not containing the pointers. Without the use of pointers the code will not perform the task which the user wants it to perform.
// after the addition of the pointer '*', the r-value of 'b' was stored in the l-value of 'a' and hence the swap function is carried out easily.
void swap(int *a, int *b) {
	 int tmp = *a;
	 *a = *b;
	 *b = tmp; // the value of 'tmp' will be stored as the value of 'b' because in the 'tmp' variable the value of 'a' is stored
}

int main() {
	int j =2, k = 5;
	printf("j = %d, k = %d\n", j, k);
	swap(j,k);
	printf("j = %d, k = %d\n", j, k);
	return 0;
}
