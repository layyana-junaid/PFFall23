/*
 *Programmer : Layyana Junaid 
 * Date : 16th October 2023
 * Desc : Lab 7 Q7
 /**

#include <stdio.h>

int main() {
  int matrix_1[2][2]; // first 2 by 2 matrix
  int matrix_2[2][2]; // second 2 by 2 matrix
  int resultant[2][2]; // resultant matrix
  int i;
  int j;
  int k;
  // Getting elements of the first matrix
    for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("Enter the elements in the matrix[%d][%d]:", i, j);
      scanf("%d", &matrix_1[i][j]);
    }
    }

    for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("%d ", matrix_1[i][j]);
      if (j == 1) {
        printf("\n");
       }
      }
      }

  // Get the elements of the second matrix 
    for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("Enter the elements in the second matrix[%d][%d]:", i, j);
      scanf("%d", &matrix_2[i][j]);
    }
    }

    for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("%d ", matrix_2[i][j]);
      if (j == 1) {
         printf("\n");
       }
      }
      }
 // multiplying the matrices
    for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      resultant[i][j] = 0; // declaration
      for (k = 0; k < 2; k++) {
        resultant[i][j] += matrix_1[i][k] * matrix_2[k][j];
      }
    }
    }
     
    // Print the result matrix
    printf("The result matrix is:\n");
    for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("%d ", resultant[i][j]);
    }
         printf("\n"); 
    }
   
return 0;

}
 