#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	printf("Введіть літери: ");
	scanf("%[^\n]", str);
	for (int i = 0; i < strlen(str); i++){
		if (str[i] >= 65 && str[i] <= 90)  str[i] += 32;
	}
	printf("Ваші літери у нижньому реєстрі: %s\n", str);
	for (int i = 0; i < strlen(str); i++){
		if (str[i] >= 97 && str[i] <= 122)  str[i] -= 32;
	}
	printf("Ваші літери у верхньому реєстрі: %s\n", str);
	return 0;
}