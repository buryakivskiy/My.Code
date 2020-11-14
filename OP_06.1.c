#include <stdio.h>

int a[3][3];
int A[3][3];

void left();
void right();
void turn_180();
void turn_vertically();
void turn_horizontally();
void print_and_synchron();

int main(){
	int k = 1, ans;
	printf("Матриця: \n\n");
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++) {
			a[i][j] = k;
			A[i][j] = k;
			printf("%d ", k);
			k++;
		} 
		printf("\n");
	}
	while (k == 10){
		printf("Виберіть напрямок повороту:\n");
		printf("1. Повернути ліворуч\n");
		printf("2. Повернути праворуч\n");
		printf("3. Повернути на 180 градусів\n");
		printf("4. Повернути вертикально\n");
		printf("5. Повернути горизонтально\n");
		printf("6. Вийти з програми\n");
		scanf("%d", &ans);
		switch (ans){
			case 1:
				left();
				break;
			case 2:
				right();
				break;
			case 3:
				turn_180();
				break;
			case 4:
				turn_vertically();
				break;
			case 5:
				turn_horizontally();
				break;
			case 6:
				k--;
				break;
		}
	}
	return 0;
}

void left(){
	int I=0;
	int J=2;
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++) {
			A[i][j] = a[I][J];
			I++;
			if (I == 3) {
				I = 0;
			}
		} 
		J--;
	}
	print_and_synchron();
}
void right(){
	int I=2;
	int J=0;
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++) {
			A[i][j] = a[I][J];
			a[I][J] = A[i][j];
			I--;
			if (I == -1) {
				I = 2;
			}
		} 
		J++;
	}
	print_and_synchron();
}
void turn_180(){
	int I = 2;
	int J = 2;
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++) {
			A[i][j] = a[I][J];
			J--;
			if (J==-1) J = 2;
		} 
		I--;
	}
	print_and_synchron();
}
void turn_vertically(){
	for (int i=0; i<3; i++){
		A[0][i] = a[2][i];
		A[2][i] = a[0][i];
	}
	print_and_synchron();
}
void turn_horizontally(){
	for (int i=0; i<3; i++){
		A[i][0] = a[i][2];
		A[i][2] = a[i][0];
	}
	print_and_synchron();
}

void print_and_synchron(){
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++) {
			printf("%d ", A[i][j]);
			a[i][j] = A[i][j];
		} 
		printf("\n");
	}
}