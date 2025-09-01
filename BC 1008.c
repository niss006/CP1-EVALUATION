#include <stdio.h>

int main() {

    int a,b;
    float c;

    scanf("%d %d %f", &a, &b, &c);
    float s = b*c;

    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %.2f\n", s);

    return 0;
}
