/*Exercicio 016

Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.

Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00.

Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.
Exercicio 017*/
#include<stdio.h>
#include<math.h>
float PTINTA = 80.00;
int main(){
    float m,l,pr;
    int ln;

    printf("Digite o tamanho da area: ");
    scanf("%f",&m);
    l = (m/3);
    printf("Sao necessarios [%.2f] litros\n",l);

    //Calculo de latas necessarias
    ln = l / 18;
    pr = ceil(ln * PTINTA);
    printf("Voce vai precisar de [%d] latas para pintar, e vai gastar R$[%.2f]\n",ln,pr);
      
    
    
    
    return 0;
}