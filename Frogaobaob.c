#include <stdio.h>

int main(){
    int i = 0, j = 0;
    int dept = 0;
    int fw = 0;
    int slip = 0;
    int distance = 0;
    int day = 0;

    printf("Dept: ");
    scanf("%d", &dept);
    printf("Forward: ");
    scanf("%d", &fw);
    printf("Slip: ");
    scanf("%d", &slip);

    while (distance < dept)
    {
        if (fw <= slip)
        {
            printf("Impossible");
            break;
        } else {
            distance += fw;
            if (distance >= dept)
            {
                day++;
                break;
            }
            distance -= slip;
            day++;
        }
    }
    
    
    printf("Day: %d", day);
}