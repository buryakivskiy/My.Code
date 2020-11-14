#include <stdio.h>
#include <string.h>

void encryption(char *language, char *scytale, int n);

int main(void)
{
    //Оголошення
    char language[100];
    char  scytale[100];
    int              n;
    //Ввід даних
    printf("Введіть слово: ");
    scanf("%s", language);
    printf("Введіть к-сть букв у рядку при шифруванні: ");
    scanf("%d", &n);
    //Запуск функції
    encryption(language, scytale, n);
    //Вивід результату
    printf("Закодоване / розкодоване слово: ");
    for (int i=0; i<strlen(language); i++) printf("%c", scytale[i]);
    return 0;
}

void encryption(char *language, char *scytale, int n){
    int index = 0;
    for (int i = 0; i < n; i++){
        for (int j = i; j < strlen(language); j+=n){
            scytale[index] = language[j];
            index++;    
        }
    }
}