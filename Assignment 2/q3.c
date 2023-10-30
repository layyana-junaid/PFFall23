*Programmer: Layyana Junaid
*Date: 30th October 23
*Description: Assignment 2 Question 3

#include <stdio.h>

main() 
{
    const int days = 5;
    const int timeslot = 2;

    int availability[5][2] = {
        {1, 300, 0, 0},
        {1, 320, 1, 310},
        {0, 0, 1, 280},
        {1, 380, 0, 0},
        {1, 375, 1, 400}
    };

    // finding the availability of flights on the specific timeslot
    
    int i; // counter for 'for loop'
    printf("\n Flight Availability Chart: \n");
    printf("\n-----------------------------------------------\n");
    for (i = 0; i < days; i++) {
        printf("\n Day %d: \n", i+1);
        printf("\n Morning ~ Available: %s, Price: %d \n", availability[i][0] ? "Yes" : "No", availability[i][1]);
        printf("\n Evening ~ Available: %s, Price: %d \n", availability[i][2] ? "Yes" : "No", availability[i][3]);
        printf("\n-----------------------------------------------\n");
    }

    //  find the day for a morning flight and suggest the best option based on this preference
    printf("\n Best option for Morning Flight: \n");
    int best_morningday = -1;
    int cheapest_morningprice = -1;
    for (i = 0; i < days; i++) {
        if (availability[i][0] == 1 && (cheapest_morningprice == -1 || cheapest_morningprice > availability[i][1])) {
            cheapest_morningprice = availability[i][1];
            best_morningday = i + 1;
        }
    }
    if (best_morningday != -1) {
        printf("\n Best day for a Morning Flight: Day %d, Price: %d \n", best_morningday, cheapest_morningprice);
    } else {
        printf("\n No Morning flights available.\n");
    }

    // find the day for an evening flight and suggest the best option based on this preference
    printf("\n Best option for Evening Flight: \n");
    int best_eveningday = -1;
    int cheapest_eveningprice = -1;
    for (i = 0; i < days; i++) {
        if (availability[i][2] == 1 && (cheapest_eveningprice == -1 || cheapest_eveningprice > availability[i][3])) {
            cheapest_eveningprice = availability[i][3];
            best_eveningday = i+1;
        }
    }
    if (best_eveningday != -1) {
        printf("\n Best day for an Evening Flight: Day %d, Price: %d \n", best_eveningday, cheapest_eveningprice);
    } else {
        printf("\n No Evening flights available. \n");
    }

    // Confirming the availability of flights on a specific day and provide prices if available
    int specific_day = 2; // Specific day of inquiry
    printf("\n Flight Inquiry for Day %d: \n", specific_day);
    if (availability[specific_day][0] || availability[specific_day][2]) {
        printf("\n Flights are available on Day %d \n", specific_day);
        if (availability[specific_day][0]) {
            printf("\n Morning Price: %d \n", availability[specific_day][1]);
        }
        if (availability[specific_day][2]) {
            printf("\n Evening Price: %d \n", availability[specific_day][3]);
        }
    } else {
        printf("\n No flights available on Day %d \n", specific_day);
    }

  
} // end main 
