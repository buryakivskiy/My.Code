#include <stdio.h>
#include <math.h>

int main() {
/* Декларативна частина */
	char vidp;  // відповідь користувача
	double 	x,  // вхідний аргумент, використовуємо при обчисленні функції
		  eps,  // Епсілон для перевірки умови циклу while()
		   xn,  // Значення x^(n+2)
		   nf,  // Факторіал
		   an,  // 
		    s,
		    f; 
	int 	k,
			n,
      	  ind; 
	printf("Функція f=1+(x-1)*exp(x)-(x^2)/2\n");
	printf("ряд E(n=1..+00)((n+1)*x^(n+2))/((n+2)!) при x[-10,10)\n");
/* Зациклення програми */
do {
		/* введення вхідних даних */
		ind = 1;
		do {
			printf(" введіть x ");
			scanf("%lf", &x);
			fseek(stdin,0,SEEK_END); // очистка буфера
			if (x<-10 || x>10) printf("\tневірне значення x\n");
			else ind=0;
		} while (ind);
		ind = 1;
		do {
			printf(" введіть eps ");
			scanf("%lf", &eps);
			fseek(stdin,0,SEEK_END); // очистка буфера
			if (eps<=0) printf("\teps має бути > 0\n");
			else ind=0;
		} while (ind);
		ind = 1;
		do {
			printf(" введіть k ");
			scanf("%d", &k);
			fseek(stdin,0,SEEK_END); // очистка буфера
			if (k<=0) printf("\tкількість ітерацій має бути > 0\n");
			else ind=0;
		} while (ind);
		/* Рахує наближене значення за степеневим рядом */
		n=0;
		xn=x*x;
		nf = 2;
		s=0;
		do {
			n++;
			xn=xn*x;
			nf *= (n+2);
			an=xn*(n+1)/nf;
			s=s+an;
		} while (fabs(an)>=eps && n<k);
		/* виведення результатів */
		if (n==k) printf("досягнуто ліміту кількості ітерацій\n");
		printf("результат:\n");
		printf(" кількість ітерацій n= %d\n",n);
		printf(" наближене значення функції s= %0.9f\n",s);
		f = 1 + (x-1)*exp(x) - x*x/2;
		printf(" точне значення функції     f= %0.9f\n",f);
		printf(" похибка |f-s|= %0.9f\n",fabs(f-s));
		printf("\n\n");
		/* кінцівка програми */
		fseek(stdin,0,SEEK_END); 								// очистка буфера
		printf("Продовжувати роботу (Y - так)? ");
		while ((vidp=getchar())==' '||vidp=='\n'||vidp=='\t');  // пропуск пробільних символів
																// і одержання відповіді
		fseek(stdin,0,SEEK_END); 						   		// щоб у буфері не залишилося зайвої інформації
	} while (vidp=='Y' || vidp=='y'); 							// 
	printf("\n\n"); 
	return 0;
}