*Programmer: Layyana Junaid
*Date: 30th October 23
*Description: Assignment 2 Question 8

#include <stdio.h>

// declaration of presistence function 
int calculate_persistence(int num) {
    int persistence = 0;
    
    // calculation of the presistence number
    while (num >= 10) {
        int product = 1;
        while (num > 0) {
            product *= num % 10;
            num /= 10;
        }
        num = product;
        persistence++;
    }
    
    return persistence;
}

int main() {
    int n;
    
    while (1) {
        printf("Enter a positive integer (or EOF to exit): ");
        int result = scanf("%d", &n);
        printf("-----------------------------------------\n");
        if (result == EOF) {
            break; // Exit the loop on EOF
        } else if (result == 0 || n < 1) {
            printf("Invalid input. Please enter a positive integer.\n");
            printf("-----------------------------------------------------\n");
            while (getchar() != '\n'); 
            continue;
        }
        
        int persistence = calculate_persistence(n);
        printf("Persistence of %d is %d\n", n, persistence);
        printf("------------------------------------\n");
    }
    
    printf("Program terminated.\n");
    printf("---------------------------\n");
    return 0;
    
} // end main 

