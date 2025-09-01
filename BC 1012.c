#include <stdio.h>
#define PI 3.14159

int main() {

    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double Triangle = A*C/2;
    printf("TRIANGULO: %.3lf\n", Triangle);

    double circle = PI*C*C;
    printf("CIRCULO: %.3lf\n", circle);

    double trapezium = (A+B)*(C/2);
    printf("TRAPEZIO: %.3lf\n", trapezium);

    double square = B*B;
    printf("QUADRADO: %.3lf\n", square);

    double rectangle = A*B;
    printf("RETANGULO: %.3lf\n", rectangle);

    return 0;
}
