#include <stdio.h>
#define PI  3.14159
int main() {

    double R;
    scanf("%lf", &R);

    double Area;
    Area = PI * R * R;
    printf("A=%.4lf\n", Area);

    return 0;
}
