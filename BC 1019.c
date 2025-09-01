#include <stdio.h>

int main() {

   int secs, mins, hrs, remainingsecs;
   scanf("%d", &secs);

   hrs = secs/3600;
   secs = secs%3600;

   mins = secs / 60;
   remainingsecs = secs%60;

   printf("%d:%d:%d\n", hrs, mins, remainingsecs);

    return 0;
}
