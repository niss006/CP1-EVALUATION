#include <stdio.h>

int main() {

    char name[50];
    scanf("%s", &name);

    double s, v;
    scanf("%lf %lf", &s, &v);

    double T;
    T = s + (v*0.15);
    printf("TOTAL = R$ %.2lf\n", T);

    return 0;
}
