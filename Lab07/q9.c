/* 
 *Programmer :Layyana Junaid
 *Date : 16th October 2023
 *Desc : Lab 7 q9 
 * 
 /**


#include <stdio.h>

int main() {
  int x, y;
  printf("Enter the number of branches: ");
  scanf("%d", &x);
  printf("Enter the number of mobile phones in each branch: ");
  scanf("%d", &y);

  int bill[100][100]; // 2D array to store the bill amounts

   for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      printf("Enter the bill amount for branch %d, mobile phone %d: ", i + 1, j + 1);
      scanf("%d", &bill[i][j]);
    }
  }

 
  int total_bill = 0;
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      total_bill += bill[i][j];
    }
  }

  printf("Total bill for all branches: %d\n", total_bill);

  // Print the total bill for each branch
  for (int i = 0; i < x; i++) {
    int branch_total = 0;
    for (int j = 0; j < y; j++) {
      branch_total += bill[i][j];
    }

    printf("Total bill for branch %d: %d\n", i + 1, branch_total);
  }
  int max_bill = bill[0][0];
  int max_bill_branch_id = 0;
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      if (bill[i][j] > max_bill) {
        max_bill = bill[i][j];
        max_bill_branch_id = i;
      }
    }
  }

  printf("Branch ID where maximum bill arrived: %d\n", max_bill_branch_id + 1);


  int max_bill_mobile_phone_id = 0;
  for (int j = 0; j < y; j++) {
    if (bill[max_bill_branch_id][j] > bill[max_bill_branch_id][max_bill_mobile_phone_id]) {
      max_bill_mobile_phone_id = j;
    }
  }

  printf("Branch and Mobile Phone IDs where bill is highest of all mobile phones: %d %d\n", max_bill_branch_id + 1, max_bill_mobile_phone_id + 1);

  return 0;
}
