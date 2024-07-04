/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.*/
#include<stdio.h>

int main(){

    float hr,gh;

    printf("Quanto vc ganha por hora: ");
    scanf("%f",&gh);

    printf("Quanto vc trabalha: ");
    scanf("%f",&hr);

    float total = (gh * hr)/30;

    printf("[%.2f]",total);

    return 0;
}