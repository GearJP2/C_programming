#include <stdio.h>
#include <string.h>

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
    strcpy(ap1.pattern, "C");
    ap1.score = 0;
    ap1.p_index = 0;
    ap1.p_len = strlen(ap1.pattern);

    struct AnswerPattern ap2;
    strcpy(ap2.name, "Goran");
    strcpy(ap2.pattern, "ABCABCA");
    ap2.score = 0;
    ap2.p_index = 0;
    ap2.p_len = strlen(ap2.pattern);

    struct AnswerPattern ap3;
    strcpy(ap3.name, "Bruno");
    strcpy(ap3.pattern, "ABCABCA");
    ap3.score = 0;
    ap3.p_index = 0;
    ap3.p_len = strlen(ap3.pattern);

    int ap_arr_len = 3;
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
        for (j = 0; j < ap_arr_len; j++)
        {
            if (ABC[i] == ap_arr[j].pattern[ap_arr[j].p_index])
            {
                ap_arr[j].score++;
            }
            ap_arr[j].p_index = (ap_arr[j].p_index + 1) % ap_arr[j].p_len;
        }
    }

    dump_AnswerPattern(&ap1);
    dump_AnswerPattern(&ap2);
    dump_AnswerPattern(&ap3);
    printf("------------------\n");

    for (i = 0; i < ap_arr_len - 1; i++)
    {
        for (j = i + 1; j < ap_arr_len; j++)
        {
            if (ap_arr[i].score < ap_arr[j].score)
            {
                ap_temp = ap_arr[i];
                ap_arr[i] = ap_arr[j];
                ap_arr[j] = ap_temp;
            }
            else if (ap_arr[i].score == ap_arr[j].score)
            {
                if (strcmp(ap_arr[i].name, ap_arr[j].name) > 0)
                {
                    ap_temp = ap_arr[i];
                    ap_arr[i] = ap_arr[j];
                    ap_arr[j] = ap_temp;
                }
            }
        }
    }

    for (i = 0; i < ap_arr_len; i++)
    {
        dump_AnswerPattern(&(ap_arr[i]));
    }
}
