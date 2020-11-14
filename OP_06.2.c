#include <stdio.h>

void check(int a, int b);

int main(){
	int i;
	printf("Cкільки разів ви хочете виконати порівняння?\n");
	scanf("%d", &i);
	while (i>0){
		i--;
		int a, b;
		printf("Введіть значення а: ");
		scanf("%d", &a);
		printf("Введіть значення b: ");
		scanf("%d", &b);
		check(a,b);
	} 
	return 0;
}

void check(int a,int b){
	(a == b) ? printf("Числа рівні!\n") : (a > b) ? printf("%d більше!\n", a) : printf("%d більше!\n", b);
}