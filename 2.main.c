#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, comp, choise;
    char *userchoise[] = {"Rock", "Paper", "Scissors"};
    srand(time(0));
    comp = rand() % 3;
    printf("Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ");
    scanf("%d", &user);
    printf("You chose %s\n", userchoise[user]);
    printf("Computer chose %s\n", userchoise[comp]);
    if (user == comp) {
        printf("It's a tie!\n");
    } else if ((user == 0 && comp == 2) || (user == 1 && comp == 0) || (user == 2 && comp == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
    return 0;
}
