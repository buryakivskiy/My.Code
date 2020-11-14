#include <stdio.h>
#include <math.h>

int main(void){
	char ans;
	float a,b,c, t = 1;
	printf("Hello there! Enter a, b, c\n");
	while (t == 1) {
		printf("a = ");
		scanf("%f",&a);
		printf("b = ");
		scanf("%f",&b);
		printf("c = ");
		scanf("%f",&c);
		float x1 = (((-1)*b)-sqrt((b*b)-(4*a*c)))/(2*a), x2 = (((-1)*b)+sqrt((b*b)-(4*a*c)))/(2*a);
		printf("x1 = %.1f and x2 = %.1f\n", x1, x2);
		printf("Repeat? Answer y / n: ");
		getchar();
		scanf("%c", &ans);
		if (ans == 'y') printf("Ok! Enter a, b, c\n");
		else { printf("Ok! Have a nice day!\n"); t-- ;}
	}
	return 0;
}