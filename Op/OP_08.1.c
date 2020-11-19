#include <stdio.h>
#define PI 3.14159265358979323846

void f(double *R);

int main(void)
{
    double r;
    int ind = 1;
    while (ind){
        printf("Enter r: ");
        scanf("%lf", &r);
        if (r < 0) printf("r < 0\n");
        else {
            double *R = &r;
            f(R);
            ind = 0;
        }
    }
    return 0;
}

void f(double *R){
	double s, l, r = *R;
	s = PI*r*r;
	l = 2*PI*r;
	printf("S = %lf\n", s);
	printf("L = %lf\n", l);
}