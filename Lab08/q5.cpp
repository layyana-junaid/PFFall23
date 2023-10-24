#include <stdio.h>

int decidecarusage(int Carnum, int daysofweek) {
	if ( Carnum % 2 == 0 && daysofweek % 2 == 0) {
		return 1;
	}
	else if (Carnum % 2 != 0 && daysofweek % 2 != 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main () {
    int car; // number of car
    int days; // number of days per week
    
    printf("Enter your car number: ");
    scanf("%d",&car);
    printf("Enter the day of week ( 1 - 7 ): ");
    scanf("%d",&days);
    
    // declaration of should use car variable
     int shouldusecar = decidecarusage(car, days);
     
     if (shouldusecar) {
     	printf("You can use your car today!\n");
	 }
	 else {
	 	printf("You should not use your car today!\n");
	 }
	 
	 return 0;
} // end main 
