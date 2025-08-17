#include <stdio.h>

int main()
{
    char chess[8][8];
    int Pawn = 1;
    int Knight = 1;
    int Bishop = 1;
    int Rook = 5;
    int Queen = 9;

    int my_score = 0;
    int their_score = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            scanf("%c", &chess[i][j]);
        }
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chess[i][j] == 'P')
            {
                my_score = my_score + Pawn;
            }
            else if (chess[i][j] == 'p')
            {
                their_score = their_score + Pawn;
            }
            else if (chess[i][j] == 'N')
            {
                my_score = my_score + Knight;
            }
            else if (chess[i][j] == 'n')
            {
                their_score = their_score + Knight;
            }
            else if (chess[i][j] == 'B')
            {
                my_score = my_score + Bishop;
            }
            else if (chess[i][j] == 'b')
            {
                their_score = their_score + Bishop;
            }
            else if (chess[i][j] == 'R')
            {
                my_score = my_score + Rook;
            }
            else if (chess[i][j] == 'r')
            {
                their_score = their_score + Rook;
            }
            else if (chess[i][j] == 'Q')
            {
                my_score = my_score + Queen;
            }
            else if (chess[i][j] == 'q')
            {
                their_score = their_score + Queen;
            }
        }
    }
    int last = my_score - their_score;

    if (last == 0)
    {
        printf("equal");
    }
    else
    {
        printf("%d", last);
    }
}
