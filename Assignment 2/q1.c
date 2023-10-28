#include <stdio.h>
 int main () {
 	int b; // name of the batsman or the number of batsmen
 	int inn; // innings played by batsman
	int i;  // counter for 'for loop'
	int j; // counter for 'for loop'
	
	printf("Enter the number of batsmen playing: ");
	scanf("%d",&b);
	printf("Enter the innings played by the batsmen: "); 
 	scanf("%d",&inn);
 	
 	int battingperformance[100][100];
 	
 	for( i = 0; i < b; i++) {
 		for( j = 0; j < inn; j++) {
 		    printf("Enter the runs scored by batsman %d in %d inning: ", i + 1, j + 1);
 		    scanf("%d", &battingperformance[i][j]);
	    }
    }
    
    // displaying for every player
    // calculating total runs scored in the innings
        int total_runs = 0;
        for(i = 0; i < b; i++) {
 		for(j = 0; j < inn; j++) {
 			total_runs += battingperformance[i][j];
	    }
	   }
	 
	 // calculating average runs per innings   
	float avg = (float) total_runs / inn;
	
	// calculating highest runs scored in a single inning
       int highest = battingperformance[0][0];
        for(i = 0; i < b; i++) {
 		    for(j = 0; j < inn; j++){
 			if( battingperformance[i][j] > highest ) {
 				highest = battingperformance[i][j];
		    }
		 }
      }
    // calculating century and half centuries
        int fifty = 0; 
        int century = 0; 
        for(i = 0; i < b; i++) {
 		 for(j = 0; j < inn; j++) {
 			if(battingperformance[i][j] >= 100) {
 				century++;
			}
            else if(battingperformance[i][j] >= 50) {
                fifty++;
            } 
       	}
    }
    // displaying Data 
        printf("Total runs scored: %d\n", total_runs);
        printf("Highest run scored are: %d\n", highest);
        printf("Number of centuries scored: %d\n", century);
        printf("Number of half-centuries scored: %d\n", fifty);
        printf("Average runs per innings: %f\n", avg);
  
 
} // end main 
