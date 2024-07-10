/*Exercicio 013
Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas: Para homens: (72.7h) - 58 Para mulheres: (62.1h) - 44.7*/
#include <stdio.h>

int main(){
    float h;
    char s;

    printf("Digite sua sexualidade: \n");
    scanf("%c",&s);
    printf("Digite sua altura: \n");
    scanf("%f",&h);

    if (s == "m")
    {
       float p = (72.7 * h) - 58;
        printf("Seu peso ideal é [%.2f]",p);
    }else{
       float p = (62.1 * h) - 44.7;
        printf("Seu peso ideal é [%.2f]",p);
    }
    

    return 0;
}