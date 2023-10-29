#include <stdio.h>

 // declaration of functions 
int min(int a, int b, int c) {
	int min = a;
	if( b < min ) min = b;
	if( c < min ) min = c;
	return min;
}

void findlargest_squaresubmatrix(int matrix[100][100], int r, int c) {

	 int max_size = 0; // for storing the largest square submatrix
	 int max_row = 0; // for storing row of the largest square submatrix
	 int max_column = 0; // for storing column of the largest square submatrix
	 
	 int size[100][100]; // 2D array to store the size of the submatrix
	 
	 int i, j; // counter for 'for loop'
	 for(i = 0; i < r; i++) {
	 	size[i][0] = matrix[i][0];
	 	}
	 for(j = 0; j < c; j++) {
	 	size[0][j] = matrix[0][j];
	 }	
	 
	 // filling the 'size array' and figure out the maximum size 
	 for(i = 1; i < r; i++) {
	 	 for(j = 1; j < c; j++) {
	 	 	if(matrix[i][j] == 1) {
	 	 		size[i][j] = 1 + min(size[i - 1][j - 1], size[i - 1][j], size[i][j - 1]);
                if (size[i][j] > max_size) {
                    max_size = size[i][j];
                    max_row = i - max_size + 1;
                    max_column = j - max_size + 1;
	 	 		
			  }
		  }
		   else {
		   	     size[i][j] = 0;
		   }
	 }
}
        // Displaying the largest square submatrix
        printf("Largest Square Submatrix of 1s is: ");
        for(i = max_row; i < max_row + max_size; i++) {
        	for(j = max_column; j < max_column + max_size; j++) {
        		printf("%d", matrix[i][j]);
            }
            printf("\n");
		}
		printf("Dimensions ROWS X COLUMNS: %d X %d\n", max_size, max_size);
}
        
int main () {
	int rows, columns; // the number rows and columns in the matrix
	int i, j; // counter for 'for loop'
	
	printf("Enter the number of rows in  matrix: ");
	scanf("%d",&rows);
	printf("Enter the number of columns in  matrix: ");
	scanf("%d",&columns);
	
	// declaration of 2D array 
	int matrix[100][100]; 
	
	// input of the matrix
	for(i = 0; i < rows; i++) {
		for(j = 0; j < columns; j++) {
			printf("Enter the values of row %d and column %d: ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}
	 
	// Priniting of matrix 
	 for (i = 0; i < rows; i++) {
    for (j = 0; j < columns; j++) {
       printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
    
    findlargest_squaresubmatrix(matrix, rows, columns);

    return 0;

}// end main 
