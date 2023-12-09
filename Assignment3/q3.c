#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	// Opening the files
	FILE *per=fopen("Personal.txt","r");
	FILE *dep=fopen("Department.txt","r");
	FILE *com=fopen("Combine.txt","a");

	// 'Str' stores lines, 'temp' stores the final line that is to be put into combine.txt
	char str[20], temp[20];
	char id[5];
	char delim[2] = " \n";
	printf("Enter the ID:");
	scanf("%s", &id);
    fgets(str, 20, per);
	char *token = strtok(str, delim);

	while((strcmp(token, id)) != 0) {
		token = strtok(NULL, delim);
		if (token == NULL)
		{
			fgets(str, 20, per);
			token = strtok(str, delim);
		}
	}
	strcpy(temp, token);
	token = strtok(NULL, delim);
	strcat(temp, " ");
	strcat(temp, token);

	fgets(str, 20, dep);
	token = strtok(str, delim);
	while((strcmp(token, id)) != 0) {
		token = strtok(NULL, delim);
		if (token == NULL)
		{
			fgets(str, 20, dep);
			token = strtok(str, delim);
		}
	}
	token = strtok(NULL, delim);
	strcat(temp, " ");
	strcat(temp, token);
	fputs(temp, com);
	// Adding a newline so that next time it appends to the newline
	fprintf(com, "\n");
	return 0;
}