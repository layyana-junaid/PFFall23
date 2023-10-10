/**
 * Programmer: Layyana Junaid
 * Desc: Question 1 Lab07
 * Date: 10/10/23
 *
 */


#include <stdio.h>

int main () {
            int x; 
            int y;
            int q=0; // Quotient
            printf("Enter two positive integers: ");
            scanf("%d" "%d", &x, &y);
             while ( x > y) {
                  x = x - y;
                  q = q + 1;
               } 
              printf("Remainder is %d\n", x);
              printf("Quotient is %d\n", q);

} // end main    