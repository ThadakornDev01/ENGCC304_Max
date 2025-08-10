#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice;
    bool playing = true;

    while (playing) {
        printf("Do you want to play game (1=play,-1=exit) : \n");
        if (scanf("%d", &choice) != 1) {
            printf("\nInvalid input. Please enter 1 or -1.\n");
            while (getchar() != '\n');
            continue;
        }

        if (choice == 1) {
            srand(time(NULL));
            int secret = (rand() % 100) + 1;
            int guess;
            int score = 100;
            int lower_bound = 1;
            int upper_bound = 100;

            printf("(Score=%d)\n", score);

            while (true) {
                printf("\nGuess the winning number (%d-%d) : \n", lower_bound, upper_bound);
                if (scanf("%d", &guess) != 1) {
                    printf("Invalid input. Please enter a number.\n");
                    while (getchar() != '\n');
                    continue;
                }

                if (guess == secret) {
                    printf("That is correct! The winning number is %d.\n", secret);
                    printf("\nScore this game: %d\n", score);
                    break;
                } else {
                    score -= 10;
                    if (score < 0) score = 0; // คะแนนไม่ติดลบ

                    if (guess < secret) {
                        printf("\nSorry, the winning number is HIGHER than %d. (Score=%d)\n", guess, score);
                        lower_bound = guess + 1;
                    } else {
                        printf("\nSorry, the winning number is LOWER than %d. (Score=%d)\n", guess, score);
                        upper_bound = guess - 1;
                    }
                }
            }
        } else if (choice == -1) {
            printf("See you again.\n");
            playing = false;
        } else {
            printf("Invalid choice. Please enter 1 or -1.\n");
        }
    }

    return 0;
}