#include<stdio.h>

int main(){
    int n, m, soma = 0, pesado, leve, i;

    scanf("%d", &n);
    scanf("%d", &m);
    pesado = m;
    leve = m;
    soma = m;
    for(i=1; i<n; i++){
        scanf("%d", &m);
        soma += m;
        if(m < leve) leve = m;
        else if(m > pesado) pesado = m;
    }
    float media = (float)soma/n;
    printf("O mais pesado: %d\nO mais leve: %d\nA media: %.2f\n", pesado, leve, media);
    return 0;
}
