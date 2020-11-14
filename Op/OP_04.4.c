 #include <stdio.h>
#include <math.h>

int main(){
	int x;
	float y;
	printf("x = ");
	scanf("%d", &x);
	y = (1/(1+pow(x,2)));
	printf("1 / (1 + x^2) = %.1f\n", y);
	y = atan(x);
	printf("arctg%d = %.1f", x, y);
	return 0;
}