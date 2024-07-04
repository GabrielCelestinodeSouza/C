/*Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58*/
#include<stdio.h>

int main(){
    float a,c;

    scanf("%f",&a);
    c = (72.7*a) - 58;

    printf("Sua altura peso é [%.2f]",c);


    
    return 0;
}