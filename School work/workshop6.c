//Workshops (Input Output) SKN M.4 Special Program
#include<stdio.h>
int M1, E1, C1, P1, PR1;
int M2, E2, C2, P2, PR2;
int M3, E3, C3, P3, PR3;
int Student1, Student2, Student3;
main()
{
printf("Program Student Grade : Suankularb Wittayalai Nonthaburi School 2565\n");
printf("Please input score in same line order subject\n");
printf("Subject => Math English Chemical Physical Programming\n");
scanf("%d %d %d %d %d", &M1, &E1, &C1, &P1, &PR1);
scanf("%d %d %d %d %d", &M2, &E2, &C2, &P2, &PR2);
scanf("%d %d %d %d %d", &M3, &E3, &C3, &P3, &PR3);
printf("Student1 : %d %d %d %d %d\n", M1, E1, C1, P1, PR1);
printf("Student2 : %d %d %d %d %d\n", M2, E2, C2, P2, PR2);
printf("Student3 : %d %d %d %d %d\n", M3, E3, C3, P3, PR3);

printf("Total Score\n");
Student1 = M1+E1+C1+P1+PR1;
printf("Student1 : %d\n", Student1);
Student2 = M2+E2+C2+P2+PR2;
printf("Student1 : %d\n", Student2);
Student3 = M3+E3+C3+P3+PR3;
printf("Student1 : %d\n", Student3);
}
 