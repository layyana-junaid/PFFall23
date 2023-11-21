/**
  * Programmer: Layyana Junaid
  * Date: 21st Novemeber 2023
  * Description: Lab11 Question 05
  * 
  **/
  
#include <stdio.h>
#include <string.h>

// Employee structure
struct Employee {
    int employeeid;
    char name[100];
    double salary;
};

// Organization structure with nested Employee structure
struct Organization {
    char organisation_name[50]; 
    char organisation_numb[20]; 
    struct Employee emp;
};

int main() {
    // Declare and initialize Organization structure
    struct Organization org = {
        .organisation_name = "NU-Fast",
        .organisation_numb = "NUFAST123ABC",
        .emp = {
            .employeeid = 127,
            .name = "Linus Sebastian",
            .salary = 400000
        }
    };

    // Output information
    printf("The size of structure organisation: %zu\n", sizeof(struct Organization));
    printf("Organisation Name: %s\n", org.organisation_name);
    printf("Organisation Number: %s\n", org.organisation_numb);
    printf("Employee id: %d\n", org.emp.employeeid);
    printf("Employee name: %s\n", org.emp.name);
    printf("Employee Salary: %.2f\n", org.emp.salary);

    return 0;
}//end main
