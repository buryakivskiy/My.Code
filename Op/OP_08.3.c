#include<stdio.h>

double sum(double *a);

int main(void){
    double a[20]={0.228952, 0.568418, 0.8202277, 0.117099, 0.755212,
        0.509299, 0.572073, 0.224526, 0.852861, 0.0612133, 0.175636,
        0.568243, 0.0100543, 0.702012, 0.0345108, 0.146549, 0.189951,
        0.144139, 0.261263, 0.474034};
    double *A = &a[0];
    printf("Sum: %lf\n", sum(A));
    printf("Av: %lf\n", sum(A)/20);
    return 0;
} 

double sum(double *A){
    double sum = 0;
    for(int i=0; i<20; i++){
        sum += *(A+i);
    }
    return sum;
}