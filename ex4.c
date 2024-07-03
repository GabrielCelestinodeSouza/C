/*Exercicio 004
Faça um Programa que peça as 4 notas bimestrais e mostre a média.*/
#include <stdio.h>
float media(float a, float b, float c, float d){
    float m = (a + b + c + d)/2;
    return m;
}

int main(){
    float n1,n2,n3,n4,m;

    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    scanf("%f",&n4);

    m = media(n1,n2,n3,n4);

    printf("A media é [%.2f]", m);
    

    return 0;
}