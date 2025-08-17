#include <stdio.h>
#include <string.h>

struct team_score
{
    char name[21];
    int score[4];
    int last_score;
};

int main()
{

    int i = 0, j = 0, k = 0;
    int mark = 0;
    int temp = 0;

    struct team_score country[4];
    struct team_score store[4];
    struct team_score arr_temp;
    struct team_score team_score[4] = {0, 0, 0, 0};
    struct team_score sum_score[4] = {0, 0, 0, 0};
    struct team_score against_score[4] = {0, 0, 0, 0};
    int difference_score[4] = {0, 0, 0, 0};

    for (i = 0; i < 4; i++)
    {
        scanf("%s", country[i].name);
    }


    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &store[i].score[j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            against_score[i].last_score += store[j].score[i];
            sum_score[i].last_score += store[i].score[j];
            difference_score[i] += store[i].score[j] - store[j].score[i];
            if (store[i].score[j] > store[j].score[i])
            {
                team_score[i].last_score += 3;
            }
            else if (store[i].score[j] == store[j].score[i] && i != j)
            {
                team_score[j].last_score += 1;
            }
        }
    }
    

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4 - i - 1; j++)
        {
            if (team_score[j].last_score < team_score[j + 1].last_score)
            {
                temp = team_score[j].last_score;
                team_score[j].last_score = team_score[j + 1].last_score;
                team_score[j + 1].last_score = temp;
                arr_temp = country[j];
                country[j] = country[j + 1];
                country[j + 1] = arr_temp;
            }
            else if (team_score[j].last_score == team_score[j + 1].last_score)
            {
                if (difference_score[j] > difference_score[j + 1])
                {
                    arr_temp = country[j];
                    country[j] = country[j + 1];
                    country[j + 1] = arr_temp;
                }
                else if (difference_score[j] > difference_score[j + 1])
                {
                    arr_temp = country[j + 1];
                    country[j + 1] = country[j];
                    country[j] = arr_temp;
                }
                else
                {
                    if (sum_score[j].last_score < sum_score[j + 1].last_score)
                    {
                        arr_temp = country[j];
                        country[j] = country[j + 1];
                        country[j + 1] = arr_temp;
                    } 
                }
            }
        }
    }

    for (i = 0; i < 4; i++)
    {
        printf("%s %d\n", country[i].name, team_score[i].last_score);
    }
}