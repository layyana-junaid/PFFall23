/**
  * Programmer: Layyana Junaid
  * Date: 21st Novemeber 2023
  * Description: Lab11 Question 03
  * 
  **/
#include <stdio.h>

// Structure to represent a date
struct Date {
    int day;
    int month;
    int year;
};

// Function to compare two dates
int compare_dates(struct Date date1, struct Date date2) {
    if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year) {
        return 1;  // Dates are equal
    } else {
        return 0;  // Dates are not equal
    }
}

int main() {
    // Get input for the first date
    struct Date date1;
    printf("Enter first date (in numerical notation): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    // Get input for the second date
    struct Date date2;
    printf("Enter second date (in numerical noation): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // Compare the two dates
    if (compareDates(date1, date2)) {
        printf("Dates are equal\n");
    } else {
        printf("Dates are not equal\n");
    }

    return 0;
} // end main

