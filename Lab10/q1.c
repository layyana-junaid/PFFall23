 /**
  * Programmer: Layyana Junaid
  * Date: 20th Novemeber 2023
  * Description: Lab10 Question 01
  * 
  **/

#include <stdio.h>
#include <stdlib.h>

void printArray(void* arr, int size, int data_type) {
    if(data_type == 1) { 
        int* intArr = (int*)arr;
        for(int i = 0; i < size; i++) {
            printf("%d ", intArr[i]);
        }
    }
    else if(data_type == 2) {
        float* floatArr = (float*)arr;
        for(int i = 0; i < size; i++) {
            printf("%f ", floatArr[i]);
        }
    }
    else if(data_type == 3) {
        double* doubleArr = (double*)arr;
        for(int i = 0; i < size; i++) {
            printf("%lf ", doubleArr[i]);
        }
    }
    else if(data_type == 4) { 
        char* charArr = (char*)arr;
        for(int i = 0; i < size; i++) {
            printf("%c ", charArr[i]);
        }
    }
    printf("\n");
} // end printArray

int main() {
    int intArr[] = {1, 2, 3, 4, 5};
    float floatArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double doubleArr[] = {1.11, 2.22, 3.33, 4.44, 5.55};
    char charArr[] = "Layyana BsAi";

    printArray(intArr, 5, 1);
    printArray(floatArr, 5, 2);
    printArray(doubleArr, 5, 3);
    printArray(charArr, 12, 4);

    return 0;
}//end main 
