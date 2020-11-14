#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Введіть символ для перевірки: ");
    scanf("%c", &ch);
    if  ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))  printf("Символ з алфавіту\n");
    else if  (isspace(ch)) printf("Введений пробіл / таб / перехід на новий рядок\n");
    else  printf("Символ не з алфавіту\n");
    return 0;
} 