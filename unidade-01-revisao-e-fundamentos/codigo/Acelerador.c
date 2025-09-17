#include <stdio.h>

int main(){
    int distancia, resto;
    scanf("%d", &distancia);
    distancia -= 3;
    resto = distancia % 8 - 2;
    /*if(resto == 4) printf("2\n");
    else if(resto == 3) printf("1\n");
    else printf("3\n");*/
    //printf("%c\n", resto == 4 ? '2' : resto == 3 ? '1' : '3');
    printf("%d\n", resto);
    return 0;
}