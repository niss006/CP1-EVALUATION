#include <stdio.h>

int main() {

    int x, count=0;

    for(int i=0; i<5;i++)
    {
        scanf("%d", &x);
        if(x%2==0)
        {
            count++;
        }
    }
    printf("%d valores pares\n", count);

    return 0;
}
