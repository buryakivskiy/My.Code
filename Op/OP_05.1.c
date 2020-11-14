#include <stdio.h>

int main(void)
{
	char str[100];
	printf("Введіть будь-які декілька символів: ");
	scanf("%[^\n]", str);
	printf("Ваші символи: %s\n", str);
	return 0;
} 