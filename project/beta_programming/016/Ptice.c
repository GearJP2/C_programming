#include <stdio.h>
#include <string.h>

struct student
{
    char* name1;
    int score1;

    char* name2;
    int score2; 
    
    char* name3;
    int score3; 
};


int main()
{
    struct student s1;
    struct student s2;
    struct student s3;

    s1.name1 = "Adrian";
    s1.score1 = 0;

    s2.name2 = "Bruno";
    s1.score2 = 0;

    s3.name3 = "Goran";
    s1.score3 = 0;

    char PAdrian[4] = "ABC";
    char PBruno[5] = "BABC";
    char PGoran[7] = "CCAABB";
    int i = 0, j = 0, N = 0;

    scanf("%d", &N);

    char ABC[100];

    scanf("%s", ABC);


    for (i = 0; i < N; i++)
    {
        if (ABC[i] == PAdrian[i % 3])
        {
            s1.score1++;
        }
    }

    for (i = 0; i < N; i++)
    {
        if (ABC[i] == PBruno[i % 4])
        {
            s1.score2++;
        }
    }

    for (i = 0; i < N; i++)
    {
        if (ABC[i] == PGoran[i % 6])
        {
            s1.score3++;
        }
    }

    int sort[3] = {s1.score1, s2.score2, s2.score2};
    char* name[3] = {s1.name1, s2.name2, s3.name3};

    char* temp_1;
    int temp = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3 - i - 1; j++)
        {
            if (sort[j] < sort[j + 1])
            {
                strcpy(temp_1, name[j+1]);
                strcpy(name[j + 1], name[j]);
                strcpy(name[j], temp_1);
                temp = sort[j + 1];
                sort[j + 1] = sort[j];
                sort[j] = temp;
            }
        }
    }

//check if name is sorted

for (i = 0; i < 3; i++)
{
    printf("\n**********************\n");
    printf("%s", name[i]);
    printf("\n**********************\n");
}


    if (sort[0] == sort[1] && sort[0] == sort[2])
    {
        printf("%d\n", sort[0]);
        printf("%s\n%s\n%s", name[0], name[1], name[2]);
    } else if (sort[0] == sort[2]){
        printf("%d\n", sort[0]);
        printf("%s\n%s\n", name[0], name[2]); 
    } else {
        printf("%d\n", sort[0]);
        printf("%s\n", name[0]); 
    }

}