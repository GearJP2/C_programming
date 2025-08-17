#include <stdio.h>
#include <ctype.h>
#include <time.h>

int main()
{
    char questions[][100] = {"1. Who are you?",
                             "2. How old are you?",
                             "3. How tall are you?",
                             "4. How much is your weight?"};

    char options[][100] = {"A. Gear", "B. Year", "C. Zeang", "D. Gold",
                           "A. 15", "B. 16", "C. 17", "D. 18",
                           "A. 166", "B. 167", "C. 165", "D. 165",
"A. 73",
                           "B. 74", "C. 75", "D. 76"};

    char answers[4] = {'A', 'D', 'B', 'C'};

    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score;

    printf("Quiz Game!\n");

    for (int i = 0; i < numberOfQuestions; i++)
    {
        printf("%s\n", questions[i]);
        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s ", options[j]);
        }
        printf("\n");
        scanf("%c", &guess);
        scanf("%c");
        if (guess == answers[i])
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("INCORRECT! Next question :)\n");
        }
    }
    printf("*******************************\n");
    printf("Your scores: %d\n", score);
    printf("*******************************\n");
}