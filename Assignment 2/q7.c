*Programmer: Layyana Junaid
*Date: 30th October 23
*Description: Assignment 2 Question 7

#include <stdio.h>

int main() 
{
    int s; // input of shirt from the user
    printf("Enter the number of shirts: ");
    scanf("%d", &s);

    
    int shirt[s][2]; // array to store input

    int i, j; // counter for 'for loop'
    // storing the value in the 2D array
    printf("Enter age and price for each shirt:\n");
    for (i = 0; i < s; i++) {
        printf("Shirt %d Age: ", i + 1);
        scanf("%d", &shirt[i][0]); 

        printf("Shirt %d Price: ", i + 1);
        scanf("%d", &shirt[i][1]);
    }
    // declaration of age and price variables
    int temp_age, temp_price;
    for (i = 0; i < s - 1; i++) {
        for (j = 0; j < s - i - 1; j++) 
        {
            if (shirt[j][0] > shirt[j + 1][0]) 
            {
                temp_age = shirt[j][0];
                shirt[j][0] = shirt[j + 1][0];
                shirt[j + 1][0] = temp_age;

                temp_price = shirt[j][1];
                shirt[j][1] = shirt[j + 1][1];
                shirt[j + 1][1] = temp_price;
            }
            
            else if (shirt[j][0] == shirt[j + 1][0] && shirt[j][1] < shirt[j + 1][1]) 
            {
                temp_price = shirt[j][1];
                shirt[j][1] = shirt[j + 1][1];
                shirt[j + 1][1] = temp_price;
            }
        }
    }

   
    printf("\nSorted Shirt Details based on Age and Price:\n");
    printf("Age\tPrice\n");
    for (i = 0; i < s; i++) {
        printf("%d\t%d\n", shirt[i][0], shirt[i][1]);
    }

    return 0;
} // end main
