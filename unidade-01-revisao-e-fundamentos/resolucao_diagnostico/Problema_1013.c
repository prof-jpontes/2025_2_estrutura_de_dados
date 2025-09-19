#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int maiorAB = fmax(a,b);
    int maior = fmax(maiorAB, c);

    printf("%d eh o maior\n", maior);

    return 0;
}