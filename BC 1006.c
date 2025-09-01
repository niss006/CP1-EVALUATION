#include <stdio.h>

int main() {

    double A, B, C;
    double wA = 2, wB = 3, wC = 5;
    double MEDIA;

    scanf("%lf %lf %lf", &A, &B, &C);
     MEDIA = (A*wA + B*wB + C*wC)/(wA + wB + wC);

     printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}
