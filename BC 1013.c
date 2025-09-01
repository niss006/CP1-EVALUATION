#include <stdio.h>

int main() {

    int a, b, c, major, majorAB;

    scanf("%d %d %d", &a, &b, &c);

    majorAB= (a+b+abs(a-b))/2;

    major = (majorAB+c+abs(majorAB-c))/2;

    printf("%d eh o maior\n", major);

    return 0;
}
