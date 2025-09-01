#include <stdio.h>

int main() {
 int days, years, months, remaining_days;

    scanf("%d", &days);

    years = days / 365;
    days = days % 365;

    months = days / 30;
    remaining_days = days % 30;

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", remaining_days);

    return 0;
}
