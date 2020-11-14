#include <stdio.h>
#include <string.h>

void Vizener(char *str);

int main(void){
	char str[100];
	printf("Введіть рядок, який необхідно закодувати: \n");
	scanf("%s", str);
	Vizener(str);
	printf("Ось зашифрований рядок:\n%s\n", str);
	return 0;
}

void Vizener(char *str){
	int k;
	for (int i=0; i<strlen(str); i++){
		if (str[i] >= 65 && str[i] <= 90){
			k = str[i]-64;
			if (str[i]+k > 90) str[i]-=(26-k);
			else str[i]+=k;
		}
		else if (str[i] >= 97 && str[i] <= 122){ 
			k = str[i]-96;
			if (str[i]+k > 122) str[i]-=(26-k);
			else str[i]+=k;
		}
	}
}