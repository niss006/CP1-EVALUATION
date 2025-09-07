#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);

    if (n % 2 == 0) {
        n++;
    }


    while (count < 6) {
        printf("%d\n", n);
        n += 2;
        count++;
    }

    return 0;
}
