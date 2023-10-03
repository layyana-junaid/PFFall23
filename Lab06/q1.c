/**
 * Programmer: Layyana Junaid
 * Desc: Practicing loops with dummy problems
 * Date: 10/3/23
 *
 */

#include <stdio.h>
int main () {
        int num; // input frm the user
        int sum = 0;
        printf("Enter a postive number; ");
        scanf("%d",&num);
          
        for ( int i=0; i <= num/2; i++) {
            if(num % i == 0) {
               sum += i;
                        }
        }
       if(sum == num) 
            printf("%d is a perfect number",num);
         else 
            printf("%d is not a perfect number",num);

} // end main               