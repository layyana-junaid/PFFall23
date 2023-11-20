/**
  * Programmer: Layyana Junaid
  * Date: 20th Novemeber 2023
  * Description: Lab10 Question 03
  * 
  **/

#include <stdio.h>
#include <stdlib.h>

// Function to check whether a number is prime or not
int is_prime(int numb) {
    if (numb <= 1) return 0;
    if (numb == 2) return 1;
    if (numb % 2 == 0) return 0;

    for (int i = 3; i * i <= numb; i += 2) {
        if (numb % i == 0) return 0;
    }

    return 1;
} // end is prime

// Function to fill the 2D array with consecutive prime numbers
void array_fill(int** arr, int rows, int cols) {
    int prime_counter = 0;
    int numb = 2;

    while (prime_counter < rows * cols) {
        if (is_prime(numb)) {
            arr[prime_counter / cols][prime_counter % cols] = numb;
            prime_counter++;
        }
        numb++;
    }
}

int main() {
    int rows = 3, cols = 3;

    // Dynamically allocate memory for the 2D array
    int** arr = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int*)malloc(cols * sizeof(int));
    }

    array_fill(arr, rows, cols);

    // Print the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf(" ");
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}