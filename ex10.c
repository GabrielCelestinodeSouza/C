/*Exercicio 010
Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.*/
#include<stdio.h>

int main(){
    float temp, tempf;

     scanf("%f",&temp);

     tempf = (temp * 9/5) + 32;

     printf("[%.1f]",tempf);

     return 0;
}