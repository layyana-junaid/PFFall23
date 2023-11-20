/**
  * Programmer: Layyana Junaid
  * Date: 20th Novemeber 2023
  * Description: Lab10 Question 05
  * 
  **/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<sys/time.h>

#define M 800
#define N 800

// Function to multiply each element in a 2D array by 3 and then divide it by 2
void process_array(int** array, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            array[i][j] = (array[i][j] * 3) / 2;
        }
    }
}

// Function to free a dynamically allocated 2D array
void free_array(int** array, int rows) {
    for (int i = 0; i < rows; ++i) {
        free(array[i]);
    }
    free(array);
}

int main() {
    // Measure CPU time
    clock_t start, end;
    double cpu_time_used;

    // Measure real-time
    struct timeval tv1, tv2;
    double real_time_used;

    // Dynamic allocation of 2D arrays
    int** array1;
    int** array2;

    // a. 100 x 100
    int rows_a = 100;
    int cols_a = 100;

    // b. 500 x 500
    int rows_b = 500;
    int cols_b = 500;

    // c. 800 x 800
    int rows_c = 800;
    int cols_c = 800;

    // a. Allocate array1 with several calls to malloc
    start = clock();
    gettimeofday(&tv1, NULL);

    array1 = (int**)malloc(rows_a * sizeof(int*));
    for (int i = 0; i < rows_a; ++i) {
        array1[i] = (int*)malloc(cols_a * sizeof(int));
    }

    end = clock();
    gettimeofday(&tv2, NULL);

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    real_time_used = (double)(tv2.tv_usec - tv1.tv_usec) / 1000000 + (double)(tv2.tv_sec - tv1.tv_sec);

    printf("Array 1 (100x100): CPU Time: %f seconds, Real Time: %f seconds\n", cpu_time_used, real_time_used);

    // b. Allocate array2 with 2 malloc calls
    start = clock();
    gettimeofday(&tv1, NULL);

    array2 = (int**)malloc(rows_a * sizeof(int*));
    array2[0] = (int*)malloc(rows_a * cols_a * sizeof(int));

    for (int i = 1; i < rows_a; ++i) {
        array2[i] = array2[0] + i * cols_a;
    }

    end = clock();
    gettimeofday(&tv2, NULL);

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    real_time_used = (double)(tv2.tv_usec - tv1.tv_usec) / 1000000 + (double)(tv2.tv_sec - tv1.tv_sec);

    printf("Array 2 (100x100): CPU Time: %f seconds, Real Time: %f seconds\n", cpu_time_used, real_time_used);

    // Process and time array1
    start = clock();
    gettimeofday(&tv1, NULL);

    process_array(array1, rows_a, cols_a);

    end = clock();
    gettimeofday(&tv2, NULL);

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    real_time_used = (double)(tv2.tv_usec - tv1.tv_usec) / 1000000 + (double)(tv2.tv_sec - tv1.tv_sec);

    printf("Process Array 1 (100x100): CPU Time: %f seconds, Real Time: %f seconds\n", cpu_time_used, real_time_used);

    // Process and time array2
    start = clock();
    gettimeofday(&tv1, NULL);

    process_array(array2, rows_a, cols_a);

    end = clock();
    gettimeofday(&tv2, NULL);

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    real_time_used = (double)(tv2.tv_usec - tv1.tv_usec) / 1000000 + (double)(tv2.tv_sec - tv1.tv_sec);

    printf("Process Array 2 (100x100): CPU Time: %f seconds, Real Time: %f seconds\n", cpu_time_used, real_time_used);

    // Free memory
    free_array(array1, rows_a);
    free(array2[0]);
    free(array2);

    return 0;
}
