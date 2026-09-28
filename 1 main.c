#include <stdio.h>
#include <string.h>

int main() {
    char *question[] = {
        "1. What is the capital of France?",
        "2. What is the largest planet in our solar system?",
        "3. Who wrote 'To Kill a Mockingbird'?",
        "4. What is the chemical symbol for gold?",
        "5. What is the square root of 64?"
    };

    char *answer[] = {
        "1. Paris",
        "2. Jupiter",
        "3. Harper Lee",
        "4. Au",
        "5. 8"
    };

    char userAnswer[100];
    int score = 0;
    char *correctAnswer;

    for (int i = 0; i < 5; i++) {
        printf("%s\n", question[i]);
        printf("Your answer: ");
        fgets(userAnswer, sizeof(userAnswer), stdin);
        userAnswer[strcspn(userAnswer, "\n")] = 0; // Remove newline character

        correctAnswer = answer[i] + 3; // Skip the number and dot in the answer

        if (strcmp(userAnswer, correctAnswer) == 0) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Incorrect. The correct answer is: %s\n", correctAnswer);
        }
    }
    printf("Your final score is: %d out of 5\n", score);
}
