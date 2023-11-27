/**
  * Programmer: Layyana Junaid
  * Date: 21st Novemeber 2023
  * Description: Lab11 Question 03
  * 
  **/
#include <stdio.h>
#include <time.h>

void add_days(struct tm *date, int days) {
    time_t new_date = mktime(date);
    new_date += days * 24 * 60 * 60;
    *date = *localtime(&new_date);
}

int main() {
    time_t now;
    struct tm current_date;
    int days = 45;

    // Get the current date
    time(&now);
    current_date = *localtime(&now);

    // Print the current date
    printf("Current date: %d-%02d-%02d\n", current_date.tm_year + 1900, current_date.tm_mon + 1, current_date.tm_mday);

    // Adding 45 days to the current date
    add_days(&current_date, days);

    // Printing the final date
    printf("Final date after adding %d days: %d-%02d-%02d\n", days, current_date.tm_year + 1900, current_date.tm_mon + 1, current_date.tm_mday);

    return 0;
}// end main 