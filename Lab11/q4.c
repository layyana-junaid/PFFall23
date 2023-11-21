#include <stdio.h>
#include <string.h>

#define numb_employees 10
#define salary_incement_8_hours 50
#define salary_incement_10_hours 100
#define salary_incement_12_hours 150

// Define a structure for storing employee information
struct Employee {
    char name[50];
    float salary;
    int hours_per_day;
};

// Function to increase salary based on hours worked per day
void increaseSalary(struct Employee *employee) {
    if (employee->hours_per_day >= 12) {
        employee->salary += salary_incement_12_hours;
    } else if (employee->hours_per_day >= 10) {
        employee->salary += salary_incement_10_hours;
    } else if (employee->hours_per_day >= 8) {
        employee->salary += salary_incement_8_hours;
    }
}

int main() {
    // Declare an array to store information for 10 employees
    struct Employee employees[numb_employees];
    int i; // counter for 'for loop'
    // Input employee information
    for (i = 0; i < numb_employees; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Hours of work per day: ");
        scanf("%d", &employees[i].hours_per_day);

        // Increase salary based on hours worked per day
        increaseSalary(&employees[i]);

        printf("\n");
    }

    // Print the name and final salary of all employees
    printf("Employee Details after Salary Increase:\n");
        for (i = 0; i < numb_employees; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Final Salary: $%.2f\n", employees[i].salary);
        printf("\n");
    }

    return 0;
}//end main


