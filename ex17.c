/*Faça um Programa para uma loja de tintas.

O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.

Considere que a cobertura da tinta é de 1 litro para cada 6 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00 ou
em galões de 3,6 litros, que custam R$ 25,00.

Informe ao usuário as quantidades de tinta a serem compradas e os respectivos preços em 3 situações:*/
#include <stdio.h>
#include <math.h>
//lata   
double precol = 80.00, litrosl = 18, cobertura = 6;
//galao
double precog = 25.00, litrosg = 3.6;
int main(){
 
    int m;
    //lata
    double l,prlt,qtlt;
    //galao
    double qtgl,prgl;
    //mistura
    
    printf("Digite quantos metros voce ira pintar: ");
    scanf("%d",&m);
    l = m/cobertura;
    //Latas
    qtlt = ceil(l / litrosl);
    prlt = qtlt * precol;
    printf("Voce ira precisar de [%.2f] litros de tinta\n [%.2f] LATAS de tinta e ira pagar R$:[%.2f]\n",l,qtlt,prlt);
    //galao
    qtgl = ceil(l / litrosg);
    prgl = qtgl * precog;
    printf("Voce ira precisar de [%.2f] litros de tinta\n [%.2f]GALOS de tinta e ira pagar R$:[%.2f]\n",l,qtgl,prgl);
    //mistura
    int latas = l/litrosl;
    double restante = l - (latas * litrosl);
    int galoes = ceil(restante/litrosg);
    double pr = (latas * precol) + (galoes * precog);

    printf("LATAS: [%d]\nGALOES: [%d]\n", latas,galoes);
    printf("Voce vai pagar [%.2f]",pr);

    
    return 0;
}

