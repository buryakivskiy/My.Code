/* Буряківський Сергій, ТЕФ, варіант № 2.
Лабораторна робота № 5.2. Вкладена перевірка умов */

#include <stdio.h>
#include <math.h>

int main() {
	/* Обчислення значення функції, заданої логічною залеж-
	* ністю. Використання вкладених умовних операторів. */
	float x,     // значення аргумента
	y,           // значення функції
	a,b;         // параметри функції
	int nom; // номер повідомлення (0 – обчислено значення)
	/* Виведення вигляду функції на екран */
	printf("       ┌sqrt ( 5x^2 - a ),  x < 3\n");
	printf("f(x) = |bx + 8           ,  x = 3\n");
	printf("       └cos(x)           ,  3 < x < 11\n\n");
	// Введення вхідних даних
	printf("Введіть значення x ");
	scanf("%f", &x);
	printf("Введіть значення a ");
	scanf("%f", &a);
	printf("Введіть значення b ");
	scanf("%f", &b);
	printf("\n\n");
	/* Обчислення значення функції */
	nom = 0;
	if ( x < 3 ) {                  // Перший проміжок
		if ( 5*x*x-a < 0 ) nom = 1; // ОДЗ порушено
		else y = sqrt(5*x*x - a);   // ОДЗ не порушено
	}								//
	else if ( x == 3){              // Другий проміжок - особливостей нема
	    y = b*x + 8;                //
	}                               //
	else if ( x < 11){              // Третій проміжок - особливостей нема
	    y = cos(x);                 //
	}                               //
	else nom = 2;                   // Значення х задано поза проміжком
	/* Друк результату обчислення */
	switch (nom) {
		case 1:  printf("Корінь з від`ємного числа."); break;
		case 2:  printf("Функція не визначена"); break;
		default: printf("f(%4.2f) = %6.3f", x, y); 
	}
	printf("\n\n");
	return 0;
}