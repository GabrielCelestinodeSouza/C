/*Exercicio 014

João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho.

Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente.

João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso.

Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João deverá pagar. Imprima os dados do programa com as mensagens adequadas.*/
#include<stdio.h>
int PESTABEL = 50;
float MULTA = 4.00;
int main(){
    float kg,multa,excesso;

    printf("Digite quantos quilos:  ");
    scanf("%f",&kg);
    excesso = kg - 50.0;
    if (kg > 50.0){
        multa = excesso * 4.0;
        printf("Voce passou [%.2f]kg\n",excesso);
        printf("Multa: [%.2f]",multa);
    }else{
        printf("Dentro do limite");
    }
    

    return 0;
}