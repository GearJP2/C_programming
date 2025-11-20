#include <stdio.h>
#include <string.h>

struct team {
    char name[21];
    int points;
    int goals_for;
    int goals_against;
};

int main() {
    struct team teams[4];
    int scores[4][4];
    int i, j;

    // Read team names
    for (i = 0; i < 4; i++) {
        scanf("%s", teams[i].name);
        teams[i].points = 0;
        teams[i].goals_for = 0;
        teams[i].goals_against = 0;
    }

    // Read match scores
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &scores[i][j]);

    // Calculate points, goals for/against
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i == j) continue;
            teams[i].goals_for += scores[i][j];
            teams[i].goals_against += scores[j][i];

            if (scores[i][j] > scores[j][i])
                teams[i].points += 3;
            else if (scores[i][j] == scores[j][i])
                teams[i].points += 1;
        }
    }

    // Sort teams
    for (i = 0; i < 4 - 1; i++) {
        for (j = 0; j < 4 - i - 1; j++) {
            int diff1 = teams[j].goals_for - teams[j].goals_against;
            int diff2 = teams[j+1].goals_for - teams[j+1].goals_against;
            if (
                (teams[j].points < teams[j+1].points) ||
                (teams[j].points == teams[j+1].points && diff1 < diff2) ||
                (teams[j].points == teams[j+1].points && diff1 == diff2 && teams[j].goals_for < teams[j+1].goals_for)
            ) {
                struct team tmp = teams[j];
                teams[j] = teams[j+1];
                teams[j+1] = tmp;
            }
        }
    }

    // Print results
    for (i = 0; i < 4; i++) {
        printf("%s %d\n", teams[i].name, teams[i].points);
    }

    return 0;
}
