#include <stdio.h>

int main() {

   int time, speed;
   float distance, litre;
   scanf("%d %d", &time, &speed);

   distance = speed * time;

   litre = distance/12.0;

   printf("%.3f\n", litre);


    return 0;
}
