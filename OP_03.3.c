#include <stdio.h>
#include <string.h>

int main(void)
{
    int i = 4, j = 8;
    while (i>0){
    	for (int i=0; i<j; i++) printf("$");
    	printf("\n");
    	i--;
    }
    return 0;
}