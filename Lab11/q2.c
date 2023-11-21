/**
  * Programmer: Layyana Junaid
  * Date: 21st Novemeber 2023
  * Description: Lab11 Question 02
  * 
  **/

#include <stdio.h>
#include <string.h>

#define MAX_PARTS 300

struct EnginePart {
    char serialnum[4];  // 2 letters + 1 digit
    int manufacture_year;
    char material[20];
    int quantity_manufactured;
};

struct AutomobileCompany {
    struct EnginePart parts[MAX_PARTS];
    int num_parts;
};

void addEnginePart(struct AutomobileCompany *company, const char *serialnum, int manufacture_year, const char *material, int quantity_manufactured) {
    if (company->num_parts < MAX_PARTS) {
        struct EnginePart *newPart = &company->parts[company->num_parts++];
        strncpy(newPart->serialnum, serialnum, sizeof(newPart->serialnum));
        newPart->manufacture_year = manufacture_year;
        strncpy(newPart->material, material, sizeof(newPart->material));
        newPart->quantity_manufactured = quantity_manufactured;
    } else {
        printf("Maximum number of parts reached. Cannot add more parts.\n");
    }
} // end enginepart

void retrieveParts(struct AutomobileCompany *company, const char *start_serial, const char *end_serial) {
	int i; // counter for 'for loop'
    printf("Parts between %s and %s:\n", start_serial, end_serial);
    for (i = 0; i < company->num_parts; i++) {
        if (strcmp(company->parts[i].serialnum, start_serial) >= 0 &&
            strcmp(company->parts[i].serialnum, end_serial) <= 0) {
            printf("Serial Number: %s\n", company->parts[i].serialnum);
            printf("Year of Manufacture: %d\n", company->parts[i].manufacture_year);
            printf("Material: %s\n", company->parts[i].material);
            printf("Quantity Manufactured: %d\n", company->parts[i].quantity_manufactured);
            printf("\n");
        }
    }
} // end retrieveParts

int main() {
    struct AutomobileCompany company = { .num_parts = 0 };

    // Adding engine parts
    addEnginePart(&company, "AA1", 2010, "Steel", 100);
    addEnginePart(&company, "BB3", 2019, "Aluminum", 35);
    addEnginePart(&company, "CC4", 2022, "Plastic", 95);
    addEnginePart(&company, "DD7", 2023, "Steel", 120);

    // Retrieving information for parts between BB1 and CC6
    retrieveParts(&company, "BB1", "CC6");

    return 0;
} // end main

