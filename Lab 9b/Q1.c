#include <stdio.h>

// declaration of factorial function
 int factorial(int num) {
 	if( num == 0 ) {
 	return 1;
    }
    else {
    	return num * factorial(num - 1);
	}
	
 }
 
 int main () {
 	int numb; 
 	int answer = 0; // storing the value of factorial
 	printf("Enter an integer: ");
 	scanf("%d",&numb);

   if (numb < 0) {
   	printf("Factorial is not defined!");
   }
   else {
   	answer = factorial(numb);
   	printf("Factorial of %d is %d\n", numb, answer);
   }
   
    return 0;
 
}// end main
