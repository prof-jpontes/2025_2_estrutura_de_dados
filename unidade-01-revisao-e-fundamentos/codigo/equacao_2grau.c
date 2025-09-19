#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, x1, x2, delta;
    printf("Digite os conficientes A, B e o termo indepente C da equacao do 2 grau\n");
    printf("A: ");
    scanf("%lf", &a);

    printf("B: ");
    scanf("%lf", &b);

    printf("C: ");
    scanf("%lf", &c);

    delta = pow(b, 2) - 4 * a * c;

    if(delta < 0) printf("A equacao nao possui raizes reais\n");
    
    else if(delta == 0){
        x1 = -b / 2 * a;
        printf("A equacao possui uma raiz real: %.2lf\n", x1);
    }

    else{
        x1 = (-b -sqrt(delta)) / (2 * a);
        x2 = (-b +sqrt(delta)) / (2 * a);

        printf("A equacao possui duas raizes reais: %.2lf e %.2lf\n", x1, x2);
    }

    return 0;
}