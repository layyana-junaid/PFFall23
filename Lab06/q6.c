#include <stdio.h>

int user_picksticks(int sticks) {
    int n;
    while (1) {
        printf("Your turn. Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &n);
        if (n >= 1 && n <= 4 && n <= sticks) {
            return n;
        } else {
            printf("Invalid choice. You must pick 1, 2, 3, or 4 matchsticks, and there should be enough left.\n");
        }
    }
}

int computer_picksticks(int sticks) {
    int computer_choice = (sticks - 1) % 5;
    if (computer_choice == 0) {
        computer_choice = 1;
    }
    return computer_choice;
}

int main() {
    int s = 21; // sticks of the game

    printf("\n----Welcome to the Matchstick Game!----\n");
    printf("\nRules: There are 21 matchsticks. The player who picks the last matchstick loses.\n");

    while (s > 0) {
        int user_picks = user_picksticks(s);
        s -= user_picks;
        printf("\nYou picked %d matchstick(s). %d left.\n", user_picks, s);

        if (s == 0) {
            printf("\nCongratulations! You picked the last matchstick. You win!\n");
            break;
        }

        int computer_picks = computer_picksticks(s);
        s -= computer_picks;
        printf("\nComputer picked %d matchstick(s).\n %d left.\n", computer_picks, s);

        if (s == 0) {
            printf("\nThe computer picked the last matchstick. Computer wins!\n");
        }
    }

    return 0;
} // end main 


