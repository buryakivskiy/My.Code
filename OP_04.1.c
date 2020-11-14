#include <stdio.h>

int main(void){
	int mark, ch2; 
	char ch;
	printf("Введіть ваший бал за шкалою від 0 до 100: ");
	scanf("%d", &mark);
	printf("\n");
	if (mark >= 95 && mark <=100) {ch = 'A'; ch2 = 1; }
	else if (mark >= 85 && mark <=94) { ch = 'B'; ch2 = 2; }
	else if (mark >= 75 && mark <=84) { ch = 'C'; ch2 = 2; }
	else if (mark >= 65 && mark <=74) { ch = 'D'; ch2 = 3; }
	else if (mark >= 60 && mark <=64) { ch = 'E'; ch2 = 3; }
	else if (mark < 60 && mark != 0){/*ch = 'Fx';*/ch2 = 4;} //Закоментували, оскільки тип Char містить лише 1 елемент
	else if (mark == 0){ch = 'F'; ch2 = 5;}
	printf(" ____________________________________________________________________________________ \n");
	printf("| Бали за 100-бальною шкалою | Оцінка за шкалою ЄКТС | Оцінка за національною шкалою |\n");
	printf("|____________________________|_______________________|_______________________________|\n");
	printf("|                            |                       |                               |\n");
	printf("|             %3d            |", mark); 
	if (ch2 != 4) printf("           %2c          |", ch); else printf("           Fx          |");
	if ( ch2 == 1) printf("            Відмінно           |\n");
	else if ( ch2 == 2) printf("             Добре             |\n");
	else if ( ch2 == 3) printf("           Задовільно          |\n");
	else if ( ch2 == 4) printf("          Незадовільно         |\n");
	else if ( ch2 == 5) printf("          Не зараховано        |\n");
	printf("|____________________________|_______________________|_______________________________|\n");
	return 0;
}
