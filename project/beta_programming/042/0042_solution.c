#include <stdio.h>
#include <math.h>

int main() {
    int input;
    scanf("%d", &input);

    double q[214];
    long double total[214];

    for(int i = 0; i < input; i++) {
        scanf("%lf", &q[i]);
        total[i] = powl(2.0L, q[i]); // ใช้ powl เพื่อความแม่นยำระดับ long double
    }

    for(int i = 0; i < input; i++) {
        printf("%.0Lf\n", total[i]); // แสดงผลไม่มีทศนิยม
    }

    return 0;
}