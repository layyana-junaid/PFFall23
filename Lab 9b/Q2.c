#include <stdio.h>

int multiply(int num1, int num2) {
	if(y == 0) {
	return 0;
	} 
	else {
	return x + multiply( num1, num2 - 1);
	}
}

int main () {
	int n1, n2; // input from the user
	printf("Enter two integers: ");
	scanf("%d %d",&n1,&n2);
	
	int product = 0;
	product = multiply(n1,n2);
	printf("The product of %d and %d is %d\n", n1, n2, product);
	
	return 0;
} // end main 
 
