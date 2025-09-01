#include <stdio.h>

int main() {

    int X;
    double Y;
    double V;

    scanf("%d %lf", &X, &Y);

    V = X/Y;
    scanf("%.3lf km/l", &V);
    printf("%.3lf km/l\n", V);


    return 0;
}
