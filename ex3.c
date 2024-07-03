/*Exercicio 003
Faça um Programa que peça dois números e imprima a soma.
*/
#include <stdio.h>
int soma(int a, int b){
    return  a + b;
}
int main(){

    int n1,n2,s;

    printf("Digite um numero:   ");
    scanf("%d",&n1);

    printf("Digite outro numero:   ");
    scanf("%d",&n2);
    
    s = soma(n1,n2);

    printf("A soma dos números [%d] e [%d] eh [%d]",n1,n2,s);
    return 0;
}