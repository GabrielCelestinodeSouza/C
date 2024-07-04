/*Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9).*/
#include<stdio.h>

int main(){
     float temp,C;

     scanf("%f",&temp);

    C = (5 * (temp-32) / 9);

    printf("[%.1f]",C);

     return 0;
}