#include <stdio.h>

int main() {
    double THAI;
    double MATH;
    double ENGLISH;
    double SCIENCE;
    double SPORT;
    double GPA;

    scanf("%lf %lf %lf %lf %lf", &THAI, &MATH, &ENGLISH, &SCIENCE, &SPORT);

    GPA = (THAI + MATH + SPORT + SCIENCE + ENGLISH) / 5;

    // Use %.1lf to format the output with two decimal places
    printf("THAI = %.1lf\nMATH = %.1lf\nENGLISH = %.1lf\nSCIENCE = %.1lf\nSPORT = %.1lf\n---\nGPA = %.1lf", THAI, MATH, ENGLISH, SCIENCE, SPORT, GPA);
}
