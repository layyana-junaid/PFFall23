/** 
 * Programmer: Layyana Junaid 
 * Desc : Lab6 question2 
 * Date : 10/3/23
 *
 */


#include <stdio.h>

int main() {
       int previous=0; // first numb
       int current=1; // second numb
       int fib = 0; 
       int sum = 0;
       printf("Fibionacci Sequence till 10,000");
       for (int count=0; fib < 10000; count++) {
               printf("%d ",fib);
               fib = current + previous;
               previous = current ;
               current = fib;
           if ( fib % 3 == 0 || fib % 5 == 0 || fib % 7 == 0 ) {
               sum += fib;
               }
                
}
             printf("\n%d", sum);



} // end main
          