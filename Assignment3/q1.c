/*
 * Name : Layyana Junaid (23k-0056)
 * Date : 6th December 2023
 * Description : Evaluating matrix
 */

#include <stdio.h>
#include <stdlib.h>

// Function to compute the max value from each 2x2 submatrix
void computeMaxValues(int input[][8], int n, int output[][4]) {
    for (int i = 0; i < n / 2; ++i) {
        for (int j = 0; j < n / 2; ++j) {
            int maxVal = input[i * 2][j * 2];
            for (int row = i * 2; row < i * 2 + 2; ++row) {
                for (int col = j * 2; col < j * 2 + 2; ++col) {
                    if (input[row][col] > maxVal) {
                        maxVal = input[row][col];
                    }
                }
            }
            output[i][j] = maxVal;
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[][4], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s matrix.txt\n", argv[0]);
        return 1;
    }

    // Reading matrix from the file
    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    int n;
    fscanf(file, "%d", &n);

    int inputMatrix[8][8];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            fscanf(file, "%d", &inputMatrix[i][j]);
        }
    }

    fclose(file);

    // Allocating space for the output matrix
    int outputMatrix[4][4];

    // Computing max values from each 2x2 submatrix
    computeMaxValues(inputMatrix, n, outputMatrix);

    // Printing the input matrix
    printf("Input Matrix:\n");
    printMatrix(inputMatrix, n, n);

    // Printing the output matrix
    printf("\nResultant Matrix:\n");
    printMatrix(outputMatrix, n / 2, n / 2);

    return 0;
}
