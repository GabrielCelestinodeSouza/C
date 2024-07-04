/*Exercicio 011
Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre: o produto do dobro do primeiro com metade do segundo. a soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo.*/
#include<stdio.h>

int main(){
    int n1,n2;
    float n3,c,c1,c2,c3;

    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%f",&n3);


    c1 = (n1 * 2) * (n2 / 2);
    c2 = (n1 * 3) + n3;
    c3 = pow(n3,3);

   
    printf("[%.2f]",c1);
    printf("[%.2f]",c2);
    printf("[%.2f]",c3);



}