/**
  * Programmer: Layyana Junaid
  * Date: 20th Novemeber 2023
  * Description: Lab10 Question 05
  * 
  **/

#include <stdio.h>
#include <string.h>

// structure to represent a student
struct Student {
    int rollnum;
    char name[50];
    char department[50];
    char course[50];
    int joining_year;
};

// Structure to represent the college database
struct CollegeDatabase {
    struct Student students[450];  // Assuming there are not more than 450 students
    int num_students;  // Current number of students in the database
};

// Function to add a student to the database
void addStudent(struct CollegeDatabase *db, int rollnum, const char *name, const char *department, const char *course, int joining_year) {
    if (db->num_students < 450) {
        struct Student newStudent;
        newStudent.rollnum = rollnum;
        strncpy(newStudent.name, name, sizeof(newStudent.name) - 1);
        strncpy(newStudent.department, department, sizeof(newStudent.department) - 1);
        strncpy(newStudent.course, course, sizeof(newStudent.course) - 1);
        newStudent.joining_year = joining_year;

        db->students[db->num_students] = newStudent;
        db->num_students++;

        printf("Student %s added successfully.\n", name);
    } else {
        printf("Maximum number of students reached. Cannot add more students.\n");
    }
}

// Function to print students who joined in a particular year
void printStudentsByYear(struct CollegeDatabase *db, int year) {
	int i; // counter for 'for loop'
    printf("Students who joined in %d:\n", year);
    for (i = 0; i < db->num_students; i++) {
        if (db->students[i].joining_year == year) {
            printf("%s (Roll Number: %d)\n", db->students[i].name, db->students[i].rollnum);
        }
    }
}

// Function to print student details by roll number
void printStudentByRollNumber(struct CollegeDatabase *db, int rollnum) {
	int i; // counter for 'for loop'
    for (i = 0; i < db->num_students; i++) {
        if (db->students[i].rollnum == rollnum) {
            printf("Student Details for Roll Number %d:\n",rollnum);
            printf("Name: %s\n", db->students[i].name);
            printf("Department: %s\n", db->students[i].department);
            printf("Course: %s\n", db->students[i].course);
            printf("Year of Joining: %d\n", db->students[i].joining_year);
            return;
        }
    }
    printf("Student with Roll Number %d not found.\n", rollnum);
}

int main() {
    struct CollegeDatabase collegeDB;
    collegeDB.num_students = 0;

    // Example usage:
    addStudent(&collegeDB, 56, "Layyana Junaid", "Artificial intelligence", "Programming Fundamentals", 2023);
    addStudent(&collegeDB, 25, "Alisha Zaidi", "Artificial intelligence", "Programming Fundamentals", 2023);

    // Print students by year
    printStudentsByYear(&collegeDB, 2023);

    // Print student by roll number
    printStudentByRollNumber(&collegeDB, 55);
    printStudentByRollNumber(&collegeDB, 23);  // Student not found

    return 0;
}

