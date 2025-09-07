#include <stdio.h>

int main() {

    int x;
    scanf("%d", &x);

    for(int i=2; i<=x; i+=2)
    {
        printf("%d^2 = %d\n", i, i*i);
    }

    return 0;
}
