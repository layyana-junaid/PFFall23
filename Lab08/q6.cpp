#include <stdio.h>

void processArray(int arr[], int size, int *sum, int *max, int *min) {
  *sum = 0;
  *max = arr[0];
  *min = arr[0];

  for (int i = 0; i < size; i++) {
    *sum += arr[i];
    if (arr[i] > *max) {
      *max = arr[i];
    }
    if (arr[i] < *min) {
      *min = arr[i];
    }
  }
}

int main() {
  int arr[100]; // input from the user
  int size ; // size of array
  int i; // counter for , for loop
  
  printf("Enter the size of array: ");
  scanf("%d",&size);
   for( i = 0; i < size; i++ ) {
   	printf("Enter the element %d: ", i+1 );
   	scanf("%d",&arr[i]);
   }

  int sum, max, min;

  processArray(arr, size, &sum, &max, &min);

  printf("Array Sum: %d\n", sum);
  printf("Array Max: %d\n", max);
  printf("Array Min: %d\n", min);

  return 0;
}

