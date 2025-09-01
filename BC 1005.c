#include <stdio.h>

int main() {

 double A, B;
 double weightA = 3.5, weightB = 7.5;
 double MEDIA;

 scanf("%lf %lf", &A, &B);

 MEDIA = (A*weightA + B*weightB)/(weightA + weightB);
 printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}
