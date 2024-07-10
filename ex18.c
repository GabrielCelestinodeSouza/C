/*Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos).*/
#include <stdio.h>

int main(){
    float mbps, down, tempo_segundos, tempo_minutos;

    printf("Digite o tamanho do arquivo em MB: ");
    scanf("%f", &down);

    printf("Digite a velocidade da internet em Mbps: ");
    scanf("%f", &mbps);

    // Converte Mbps para MBps (1 Megabit = 0.125 Megabytes)
    float velocidade_MBps = mbps * 0.125;

    // Calcula o tempo de download em segundos
    tempo_segundos = down / velocidade_MBps;

    // Converte o tempo de download para minutos
    tempo_minutos = tempo_segundos / 60;

    printf("Tempo aproximado de download: %.2f minutos\n", tempo_minutos);

    return 0;
}
