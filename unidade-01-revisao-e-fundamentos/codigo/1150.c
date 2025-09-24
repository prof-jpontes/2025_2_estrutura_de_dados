#include <stdio.h>

int main(){

    int x, z, contador=1;
    scanf("%d",&x);
    do scanf("%d",&z); 
    while(z <= x);
    int soma = x;

    while(soma <= z){
        contador++;
        soma += ++x;
    }
    printf("%d\n",contador);
    
    return 0;
}