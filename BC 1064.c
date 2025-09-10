#include <stdio.h>

int main() {
    double num, sum = 0.0;
    int count = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%lf", &num);
        if (num > 0) {
            count++;
            sum += num;
        }
    }

    double average = sum / count;

    printf("%d valores positivos\n", count);
    printf("%.1lf\n", average);

    return 0;
}
