#include <stdio.h>
#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 50
typedef struct
{
    int id;
    char name[MAX_NAME_LENGTH];
    float score;
} Student;

// your code here
void inputStudentData(Student *a)
{
    int i = 0;
    for (i = 0; i < MAX_STUDENTS; i++)
    {
        printf("Enter student %d's ID:", i + 1);
        scanf("%d", &a[i].id);
        printf("Enter student %d's name:", i + 1);
        scanf("%s", a[i].name);
        printf("Enter student %d's score:", i + 1);
        scanf("%f", &a[i].score);
    }
}

void printStudentData(Student *a)
{
    printf("****************************************\n\n");
    printf("Student Data:\n");
    printf("ID\tName\tScore:\n");
    int i = 0;
    for (i = 0; i < MAX_STUDENTS; i++)
    {
        printf("%d\t%s\t%.2f\n", a[i].id, a[i].name, a[i].score);
    }
    printf("****************************************\n");
}

int findHighestScore(Student *a)
{
    int i = 0, index = 0;
    float max = a[0].score;

    while (i < MAX_STUDENTS)
    {
        if (max < a[i].score)
        {
            max = a[i].score;
            index = i;
        }
        i++;
    }

    printf("Student with the highest score:\n");
    printf("ID:  %d  Name:  %s  Score:  %.2f\n", a[index].id, a[index].name, a[index].score);
        printf("****************************************\n");
}

int main()
{
    Student students[MAX_STUDENTS];
    inputStudentData(students);
    printStudentData(students);
    findHighestScore(students);
    return 0;
}
