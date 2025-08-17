#include <stdio.h>
#include <string.h>

int count;

struct student
{
    char name[100];
    char pattern[10];
    int score;
    int index;
    int str_len;
};

void AnswerDump(const struct student *p)
{

    // printf("This is name: %s\n", p->name);
    // printf("This is score: %d\n", p->score);
    printf("%s\n", p->name);
}

int main()
{
    // int count = 0;
    int N = 0, i = 0, j = 0;

    struct student ap1;
    strcpy(ap1.name, "Adrian");
    strcpy(ap1.pattern, "ABC");
    ap1.score = 0;
    ap1.index = 0;
    ap1.str_len = strlen(ap1.pattern);

    struct student ap2;
    strcpy(ap2.name, "Bruno");
    strcpy(ap2.pattern, "BABC");
    ap2.score = 0;
    ap2.index = 0;
    ap2.str_len = strlen(ap2.pattern);

    struct student ap3;
    strcpy(ap3.name, "Goran");
    strcpy(ap3.pattern, "CCAABB");
    ap3.score = 0;
    ap3.index = 0;
    ap3.str_len = strlen(ap3.pattern);

    struct student ap_arr[] = {ap1, ap2, ap3};
    struct student arrtemp;

    int ap_arr_len = 3;

    scanf("%d", &N);
    // printf("This is the length of solution: %d\n", N);
    char answer[N + 1];
    scanf("%s", answer);
    scanf("%c");
    // printf("This is the length of solution: %s\n", answer);

    for (i = 0; i < N + 1; i++)
    {
        for (j = 0; j < ap_arr_len; j++)
        {
            if (answer[i] == ap_arr[j].pattern[ap_arr[j].index])
            {
                ap_arr[j].score++;
            }
            ap_arr[j].index = (ap_arr[j].index + 1) % ap_arr[j].str_len;
        }
    }

    int temp = 0;

    for (i = 0; i < ap_arr_len - 1; i++)
    {
        for (j = i + 1; j < ap_arr_len; j++)
        {
            if (ap_arr[i].score < ap_arr[j].score)
            {
                arrtemp = ap_arr[i];
                ap_arr[i] = ap_arr[j];
                ap_arr[j] = arrtemp;
            }
            else if (ap_arr[i].score == ap_arr[j].score)
            {
                if (strcmp(ap_arr[i].name, ap_arr[j].name) > 0)
                {
                    arrtemp = ap_arr[i];
                    ap_arr[i] = ap_arr[j];
                    ap_arr[j] = arrtemp;
                }
                count++;
            }
        }
    }

printf("%d\n", ap_arr[0].score);

if (count == 0)
{
    AnswerDump(&(ap_arr[count]));
} else{
    for (j = 0; j < count; j++)
    {
        AnswerDump(&(ap_arr[j]));
    }
}
}