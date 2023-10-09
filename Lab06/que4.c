#include <stdio.h>

int main() {
           int a; // input from the user
           int b; // input from the user
           char *ones[] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
           char *tens[] = {"Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
           printf("Enter two positive numbers: ");
           scanf("%d" "%d", &a, &b);
               for ( int i=a; i <= b; i++ ) {
               if ( i <= 9 ) {
                   printf( "%s ", ones[i - 1]);
                 }
              else {
                      if ( i % 2 == 0 ){
                          printf("Even");
                    } 
                      else {
                          printf("Odd");
                      }
               } 
          }
           
             printf("\n");
} // end main 