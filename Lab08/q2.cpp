/*
 *Programmer: Layyana Junaid
 *Date: 24th October 23
 *Desc: Question 2
 /**



#include<stdio.h>

// making addition function
int addition(int a,int b) {
    int sum = 0;
    sum = a + b;
	return sum; 
}
int product(int a,int b) {
    int product = 0;
    product = a * b;
	return product; 
}
int subtract(int a,int b) {
    int diff = 0;
    diff = a - b;
	return diff; 
}
int divide(int a,int b) {
    int division; 
    division = a / b;
	return division; 
}

int main () {
	int num1; // input 1
	int num2; // input 2
	char oper; // operation 
	
	printf("Enter first integer: ");
	scanf("%d", &num1);
	
	printf("Enter second integer: ");
	scanf("%d", &num2);
	
	printf("Which operation: ");
	scanf(" %c", &oper);
	
	switch(oper) {
		   
	  case '+' :
	            printf("Sum of the numbers is %d", addition(num1,num2));
	  	   	    break;
	  case '-' :
	  	        printf("Difference of the numbers is %d", subtract(num1,num2));
	  	   	    break;
	  case '*' :
	  	        printf("Product of the numbers is %d", product(num1,num2));
	  	   	    break;
	  case '/' :
	  	        printf("Division of the numbers is %d", divide(num1,num2));
	  	   	    break;
	}
	
	return 0;
	
} // end main
