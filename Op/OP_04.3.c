#include <stdio.h>
#include <math.h>

int main(void) {
	float a,n,res;
	printf("n = ");
	scanf("%f", &n);
	for (int i = 1; i <= n; i++) {
		a = pow(-1, i + 1)/ (2*i - 1);
		res+=a;
	}
	printf("%f", res);
	return 0;
} 