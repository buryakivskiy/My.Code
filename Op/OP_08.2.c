#include <stdio.h>

void swap (double *A, double *B);

int main(void)
{
    double a,b;
    printf("Enter a and b: ");
    scanf("%lf %lf", &a, &b);
    double *A = &a;
    double *B = &b;
    swap(A, B);
    return 0;
}

void swap(double *A, double *B){
    double a = *B;
    double b = *A;
    if (a > b) { printf("%.2lf %.2lf\n", a, b); printf("%.2lf %.2lf\n", b, a);}
    else if (a < b) { printf("%.2lf %.2lf\n", b, a); printf("%.2lf %.2lf\n", a, b); }
    else printf("a = b\n");
}