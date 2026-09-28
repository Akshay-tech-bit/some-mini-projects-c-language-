#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int number, gusses, attempts = 0;

    srand(time(0));
    number = rand() % 100 + 1;

    prinrtf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100. Can you guess it?\n");
    printf("Try to guess it!\n\n");

    do{
        printf("Enter your guess: ");
        scanf("%d", &gusses);
        attempts++;

        if (gusses < number) {
            printf("Too low! Try again.\n");
        } else if (gusses > number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts.\n", number, attempts);
        }
    }while (gusses != number);
    
      return 0;
}