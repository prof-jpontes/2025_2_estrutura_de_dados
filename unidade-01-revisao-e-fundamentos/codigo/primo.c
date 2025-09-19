#include<stdio.h>

int main(){
    int p, i, quantidade = 0;
    scanf("%d", &p);
    for(i=1; i<=p; i++){
        if(p % i == 0)quantidade++;
    }
    if(quantidade == 2)printf("Eh primo\n");
    else printf("Nao eh primo\n");
    return 0;
}