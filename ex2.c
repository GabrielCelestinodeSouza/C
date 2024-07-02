/*
Faça um Programa que peça um número e então mostre a mensagem O número
informado foi [número]. 
*/
#include <stdio.h>
int main()
{
    float numero;
    printf("Digite um numero: ");
    scanf("%f", &numero);
    printf("O numero informado foi [%f]", numero);
    return 0;
}