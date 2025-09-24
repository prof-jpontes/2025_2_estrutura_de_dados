#include <stdio.h>

int main(){

    long long int n, i, contador, quantidade = 0, numero = 1;
    scanf("%lld", &n);
    while(quantidade < n){
        contador = 0;
        for(i=1; i<numero; i++){
            if(numero % i ==0) contador += i;
        }
        if(numero == contador ){
          printf("%lld ",numero);
          quantidade++;  
        } 
        numero++;
    }

    return 0;
}