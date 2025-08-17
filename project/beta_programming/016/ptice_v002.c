#include <stdio.h>
#include <string.h>

struct student
{
    char *name1;
    int score1;

    char *name2;
    int score2;

    char *name3;
    int score3;
};

struct AnswerPattern
{
    char name[1000];
    char pattern[1000];
    int score;
    int p_index;
    int p_len;
};

void dump_AnswerPattern(const struct AnswerPattern *p)
{
    printf("\nname: %s\n", p->name);
    printf("pattern: %s\n", p->pattern);
    printf("score: %d\n", p->score);
    printf("p_index: %d\n", p->p_index);
    printf("p_len: %d\n", p->p_len);
}

int main()
{

    struct AnswerPattern ap_temp;

    struct AnswerPattern ap1;
    strcpy(ap1.name, "Adrian");
    strcpy(ap1.pattern, "ABCABCA");
    ap1.score = 0;
    ap1.p_index = 0;
    ap1.p_len = strlen(ap1.pattern);

    struct AnswerPattern ap2;
    strcpy(ap2.name, "Bruno");
    strcpy(ap2.pattern, "BA");
    ap2.score = 0;
    ap2.p_index = 0;
    ap2.p_len = strlen(ap2.pattern);

    struct AnswerPattern ap3;
    strcpy(ap3.name, "Goran");
    strcpy(ap3.pattern, "C");
    ap3.score = 0;
    ap3.p_index = 0;
    ap3.p_len = strlen(ap3.pattern);

    struct AnswerPattern ap_arr[] = {ap1, ap2, ap3};

    int i = 0, j = 0, N = 0;

    printf("N: ");
    // scanf("%d", &N);
    N = 5;
    printf("N=%d\n", N);
    if ((N >= 1) && (N <= 100))
    {
        printf("N is valid\n");
    }
    else
    {
        printf("Unexpected value on N\n");
        return 1;
    }

    char ans_temp[1000] = "ABCAB";

    printf("Answers: ");
    // scanf("%s", ans_temp);
    if (strlen(ans_temp) != N)
    {
        printf("Unexpected Answer input\n");
        return 2;
    }

    char ABC[N + 1];
    strcpy(ABC, ans_temp);
    printf("Answers: %s\n", ABC);

    for (i = 0; i < N; i++)
    {
        if (ABC[i] == ap1.pattern[ap1.p_index])
        {
            ap1.score++;
        }

        if (ABC[i] == ap2.pattern[ap2.p_index])
        {
            ap2.score++;
        }

        if (ABC[i] == ap3.pattern[ap3.p_index])
        {
            ap3.score++;
        }

        ap1.p_index = (ap1.p_index + 1) % ap1.p_len;
        ap2.p_index = (ap2.p_index + 1) % ap2.p_len;
        ap3.p_index = (ap3.p_index + 1) % ap3.p_len;
    }

    dump_AnswerPattern(&ap1);
    dump_AnswerPattern(&ap2);
    dump_AnswerPattern(&ap3);
    printf("------------------\n");


    for(i = 0; i < 3 - 1; i++) {
        for(j = i + 1; j < 3; j++) {
            if(ap_arr[i].score < ap_arr[j].score) {
                ap_temp = ap_arr[i];
                ap_arr[i] = ap_arr[j];
                ap_arr[j] = ap_temp;
            }
        }
    }

    for(i = 0; i < 3; i++) {
        dump_AnswerPattern(&(ap_arr[i]));
    }
    
}