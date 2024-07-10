/*Exercicio 015

Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.

Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê: salário bruto. quanto pagou ao INSS. quanto pagou ao sindicato. o salário líquido. calcule os descontos e o salário líquido, conforme a tabela abaixo:*/
/*+ Salário Bruto : R$
- IR (11%) : R$
- INSS (8%) : R$
- Sindicato ( 5%) : R$
= Salário Liquido : R$*/
#include<stdio.h>
float IR = 0.11;
float INSS = 0.08;
float SD = 0.05;
float imposto(float a){
    a = a - (a * (IR + INSS + SD));
    return a;
}
float salarioHoras(float a, float b){
    return a * b;
}
int main(){
    float hr,sal,sb;
    float sl;
    printf("Digite quanto voce ganha por hora: \n");
    scanf("%f",&sal);
    printf("Digite quanto voce trabalha por mes: \n");
    scanf("%f",&hr);
    sb = salarioHoras(hr,sal);
    printf("Salario Bruto: [%.2f]\n",sb);
    sl = imposto(sb);
    printf("Salario Liquido: [%.2f]",sl);


    return 0;
}