/*
 * Name : Layyana Junaid (23k-0056)
 * Date : 6th December 2023
 * Description : Displaying the Departments
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM_DEPARTMENTS 4
#define NUM_ROLES 5
#define NUM_EMPLOYEES (NUM_DEPARTMENTS * NUM_ROLES)
#define MAX_NAME_LENGTH 20

// Structure to represent an employee
typedef struct {
    char name[MAX_NAME_LENGTH];
    char role[MAX_NAME_LENGTH];
    int communication;
    int teamwork;
    int creativity;
} Employee;

// Structure to represent a department
typedef struct {
    char name[MAX_NAME_LENGTH];
    Employee employees[NUM_ROLES];
} Department;

// Function to initialize an employee with random values
void initializeEmployee(Employee *employee) {
    // Generate random values for communication, teamwork, and creativity
    employee->communication = rand() % 100 + 1;
    employee->teamwork = rand() % 100 + 1;
    employee->creativity = rand() % 100 + 1;
}

// Function to initialize a department with random employees
void initializeDepartment(Department *department, char names[][MAX_NAME_LENGTH]) {
    // Shuffle the names array randomly
    for (int i = NUM_EMPLOYEES - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        char temp[MAX_NAME_LENGTH];
        strcpy(temp, names[i]);
        strcpy(names[i], names[j]);
        strcpy(names[j], temp);
    }

    // Assign names and roles to employees
    for (int i = 0; i < NUM_ROLES; ++i) {
        strcpy(department->employees[i].name, names[i]);
        snprintf(department->employees[i].role, MAX_NAME_LENGTH, "%s", "Trainee");
        initializeEmployee(&department->employees[i]);
    }
}

// Function to compute the sum of values for a department
int computeDepartmentSum(Department *department) {
    int sum = 0;
    for (int i = 0; i < NUM_ROLES; ++i) {
        sum += department->employees[i].communication +
               department->employees[i].teamwork +
               department->employees[i].creativity;
    }
    return sum;
}

// Function to print a department along with its employees
void printDepartment(Department *department) {
    printf("-----------------------Department:'%s'--------------------------\n", department->name);
    printf("%-15s%-15s%-15s%-15s%-15s\n", "Name", "Role", "Communication", "Teamwork", "Creativity");
    for (int i = 0; i < NUM_ROLES; ++i) {
        printf("%-15s%-15s%-15d%-15d%-15d\n",
               department->employees[i].name,
               department->employees[i].role,
               department->employees[i].communication,
               department->employees[i].teamwork,
               department->employees[i].creativity);
    }
    printf("\n");
}

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Names for initializing employees
    char names[NUM_EMPLOYEES][MAX_NAME_LENGTH] = {
        "Alice", "Bob", "Charlie", "David", "Eva",
        "Frank", "Grace", "Hank", "Ivy", "Jack",
        "Kate", "Leo", "Mia", "Nick", "Olivia",
        "Paul", "Quinn", "Rachel", "Sam", "Tom"
    };

    // Create and initialize the departments
    Department departments[NUM_DEPARTMENTS];
    strcpy(departments[0].name, "HR");
    strcpy(departments[1].name, "Finance");
    strcpy(departments[2].name, "Marketing");
    strcpy(departments[3].name, "Logistics");

    for (int i = 0; i < NUM_DEPARTMENTS; ++i) {
        initializeDepartment(&departments[i], names);
    }

    // Compute the sum of values for each department and find the best department
    int maxSum = -1;
    int bestDepartmentIndex = -1;

    for (int i = 0; i < NUM_DEPARTMENTS; ++i) {
        int departmentSum = computeDepartmentSum(&departments[i]);
        if (departmentSum > maxSum) {
            maxSum = departmentSum;
            bestDepartmentIndex = i;
        }
    }

    // Print the details for each department
    for (int i = 0; i < NUM_DEPARTMENTS; ++i) {
        printDepartment(&departments[i]);
    }

    // Print the winner of the "Best Department" award
    printf("[Best Department: %s]\n", departments[bestDepartmentIndex].name);
    printf("[Total Sum of Values: %d]\n", maxSum);

    return 0;
}
