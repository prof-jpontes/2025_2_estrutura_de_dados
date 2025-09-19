#include<stdio.h>

int main(){

    int i;
    /*laço de repetição com variavel de controle*/
    //para||for    ||++i  ||j = i++ j=4 i=5 ||j = ++i j=5 i=5
    for(i=0; i<=100; i+=2){
        if(i >= 40 && i <= 80){
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}