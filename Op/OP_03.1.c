#include <stdio.h>

int main(void)
{
    int t = 2; 
    t += 5;
    printf("t = %i\n", t);
    t *= 10;
    printf("t = %i\n", t);
    t -= 6;
    printf("t = %i\n", t);
    t /= 8;
    printf("t = %i\n", t);
    t %= 3;
    printf("t = %i\n", t);
    return 0;
}