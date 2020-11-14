#include <stdio.h>
#include <string.h>

void Cesar(int k, char *str);

int main(void){
	char str[100];
	printf("Введіть величину зсуву: ");
	int k;
	scanf("%d", &k);
	printf("Введіть рядок, який необхідно закодувати: \n");
	scanf("%s", str);
	Cesar(k, str);
	printf("Ось зашифрований рядок:\n%s\n", str);
	return 0; 
}

void Cesar(int k, char *str){
	for (int i=0; i<strlen(str); i++){
		if (str[i] >= 65 && str[i] <= 90){
			if (str[i]+k > 90) str[i] += (k - 26);
			else str[i];
		}
		else if (str[i] >= 97 && str[i] <= 122){
			if (str[i]+k > 122) str[i] += (k - 26);
			else str[i]+=k;
		}
	}
}
