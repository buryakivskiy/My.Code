#include <stdio.h>
#include <math.h>

int f(int n);
float mycos(float x);

int main(void) {
    int i = 0;
    float x = 0;
    printf("┌───────────┬────────────┬────────────┐\n");
    printf("│     x     │   mycos(x) │   cos(x)   │\n");
    printf("├───────────┼────────────┼────────────┤\n");
    while (i != 11){
        printf("│    %.1f    │   %.4f   │   %.4f   │\n", x, cos(x), mycos(x));
        x += 0.1;
        i++;
    }
    printf("└───────────┴────────────┴────────────┘\n");
    return 0; 
}

int f(int n) {
    if (n!=0) return n*f(n-1);
    else return 1;
}

float mycos(float x) {
    float s = 0;
    for (int i = 0; i <= 10; i++) {
        s = s + ( (pow(-1, i) * pow(x, 2*i) ) / f(2*i) );
    }
    return s;
}