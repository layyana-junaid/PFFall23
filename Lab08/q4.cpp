*Programmer: Layyana Junaid
*Date: 24th October 23
*Description: Q4



#include <stdio.h>
#include <cstring>

int main () {
	 char password[100];
	 printf("Enter your password: ");
	 scanf("%s", password);
	 
	 // checking the length of the password
	 if (strlen(password) < 8) {
	 	printf("Incorrect password!! It must be atleast 8 characters long.\n");
	 	return 1;
	 }
	  
	  // if it meets the length requirment 
	  char storedpassword[] = "Secure123";
	  if(strcmp(password, storedpassword) == 0) {
	  	printf("Login Successful. Welcome!\n");
	}
	   else {
	   	printf("Login Failed. Incorrect Password!\n");

	   }
	   
	return 0;
	
} // end main
