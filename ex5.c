/*Exercicio 005
Faça um Programa que converta metros para centímetros.*/
#include <stdio.h>
int main()
{
    int m,c;

    printf("Digite os metros: ");
    scanf("%d",&m);

    c = m * 100;

    printf("[%d]cm",c);

    return 0;
}