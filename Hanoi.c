#include <stdio.h>
#include <math.h>

int p1;
int p2 = 0;
int p3 = 0;

void print (int one, int two, int three);
void hanoi(int n, int one, int two, int three);

int main(){
	int n;
	printf("Введіть кількість дисків: ");
	scanf("%d", &n);
	p1 = n;
	hanoi(n, 2, 0, 1);
	printf("Усі диски переміщено!\n");
	int k = pow(2,n)-1;
	printf("Кількість операцій: %d\n", k);
	return 0;
}

void print (int one, int two, int three){
	if (one == 1){
		printf("| ");
		for (int i=0; i<p1; i++) printf("0 ");
	}else {
		printf("| ");
		for (int i=0; i<p1; i++) printf("0 ");
	}
	printf("\n");
	if (two == 1){
		printf("| ");
		for (int i=0; i<p2; i++) printf("0 ");
	}else {
		printf("| ");
		for (int i=0; i<p2; i++) printf("0 ");
	}
	printf("\n");
	if (three == 1){
		printf("| ");
		for (int i=0; i<p3; i++) printf("0 ");
	}else {
		printf("| ");
		for (int i=0; i<p3; i++) printf("0 ");
	}
	printf("\n");
}

void hanoi(int n, int one, int two, int three){
	if (n == 1) {
		if (one == 1){
			p1++;
			(two == 2) ? p2-- : p3--;
		}if (two == 1){
			p2++;
			(one == 2) ? p1-- : p3--;
		}if (three == 1){
			p3++;
			(one == 2) ? p1-- : p2--;
		}
		print(one, two, three);
		printf("\n");
	}
	else {
		int One = (one == 2) ? one : (one == 1) ? 0 : 1;
		int Two = (two == 2) ? two : (two == 1) ? 0 : 1;
		int Three = (three == 2) ? three : (three == 1) ? 0 : 1;
		hanoi(n-1, One, Two, Three);
		if (one == 1){
			p1++;
			(two == 2) ? p2-- : p3--;
		}if (two == 1){
			p2++;
			(one == 2) ? p1-- : p3--;
		}if (three == 1){
			p3++;
			(one == 2) ? p1-- : p2--;
		}
		print(one, two, three);
		printf("\n");
		One = (one == 1) ? one : (one == 2) ? 0 : 2;
		Two = (two == 1) ? two : (two == 2) ? 0 : 2;
		Three = (three == 1) ? three : (three == 2) ? 0 : 2;
		hanoi(n-1, One, Two, Three);
	} 
}