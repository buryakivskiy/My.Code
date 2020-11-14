// Програма для обчислення факторіалів, які не записати в звичайну змінну
// Для цього я використав звичайний масив, елементами якого є цифри нашого числа
// Обчислення факторіала провожу звичайним множенням "в стовпчик" кожного елемента
// Можна змінити кількість елементів у масиві, відповідно для поставленої задачі

#include <stdio.h>
#include <string.h>

void big_ever_factorial(int n);

int main(void)
{
    int n;
    printf("Введіть число: ");
    scanf("%d", &n);
    if (n < 0) printf("Не існує факторіалу від від`ємного значення!\n");
    else big_ever_factorial(n);
    return 0;
}

void big_ever_factorial(int n){
    int f[1000];
    int cash = 0;
    for (int i=0; i<1000; i++) f[i]=0;
    f[999]=1;
    int i = 1;
    while ( i<=n ){
        cash = 0;
        for (int j = 999; j>=0; j--){
            f[j] = f[j]*i + cash;
            cash = f[j]/10;
            f[j] = f[j]%10;
        }
        i++;
    }
    int check = 0;
    for (int i = 0; i<1000; i++){
        if (check==0){
            if (f[i]!=0) check=1;
        }
        if (check == 1) printf("%d", f[i]);
    }
}