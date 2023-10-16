/*
 * Programmer : Layyana Junaid
 * Date : 16th October 2023
 * Desc : Lab 7 Question 4
 *
 /**


#include <stdio.h>

int main() {
     int rows, column;

     printf("Enter the number of rows: ");
     scanf("%d", &rows);

     printf("Enter the number of columns: ");
     scanf("%d", &column);

      int matrix[100][100]; // decaration of 2D array

                                         
      for (int i = 0; i < rows; i++) {
      for (int j = 0; j < column; j++) {
       printf("Enter the elements of the matrix [%d][%d]: ", i, j);
       scanf("%d", &matrix[i][j]);
        }
       }

        // Check if the array is symmetric
           int isSymmetric = 1;
           for (int i = 0; i < rows; i++) {
              for (int j = 0; j < column; j++) {
              if (matrix[i][j] != matrix[j][i]) {
                  isSymmetric = 0;
                   break;
                }
              }
            }

  
        if (isSymmetric) {
           printf("Array is symmetric:\n");
          for (int i = 0; i < rows; i++) {
          for (int j = 0; j < column; j++) {
          printf("%d ", matrix[i][j]);
         }
         printf("\n");
        }
       } else {
         printf("Array is not symmetric:\n");
         for (int i = 0; i < rows; i++) {
         for (int j = 0; j < column; j++) {
         printf("%d ", matrix[i][j]);
      }
              printf("\n");
      }
  }

  return 0;
}
