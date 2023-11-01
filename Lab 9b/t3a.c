#include <stdio.h>

int fib(int n) {
  if (n <= 1) {
    return n;
  } else {
    return fib(n - 1) + fib(n - 2);
  }
}

void print_fibonacci_numbers(int n) {
	int i; // counter for 'for loop'
  for (i = 0; i < n; i++) {
    printf("%d ", fib(i));
  }
}

int main() {
  int n;
  printf("Enter the number of Fibonacci numbers to print: ");
  scanf("%d", &n);
  printf("The first %d Fibonacci numbers are:\n", n);
  print_fibonacci_numbers(n);
   
  return 0;
}

