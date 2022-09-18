/*
Para resolver este exercício, siga os passos abaixo:
1. Escreva uma função que receba como parâmetro o raio de um círculo e retorne a área deste. Utilize pi = 3.141592.
2. Escreva uma função principal (main) que leia um valor real do teclado, chame a função desenvolvida no item anterior e imprima na tela o resultado obtido.
*/

#include <stdio.h>

float areacirculo (float x)
{
    float area, pi;
    pi = 3.141592;
    area = pi * x * x; 
    return area;
    
}

int main()
{
    float raio, areac;
    scanf("%f", &raio);
    areac = areacirculo(raio);
    printf("Área do círculo: %.2f cm2.", areac);

    return 0;
}

/*
Crie uma função que retorne a média de combustível gasto pelo usuário. Esta função receberá a quantidade de quilômetros rodados e a quantidade de combustível 
consumido em litros. Faça também um programa que leia os valores chame, a função e imprima na tela a resposta. A resposta deverá ser impressa no formato 9.999 km/l, 
ou seja com 3 casas decimais seguido pela unidade km/l.
*/

#include <stdio.h>

float media ( float km, float gas )
{
    float media;
    media = km / gas;
    return media;
}

int main()
{
    float gas, km, kmporgas;
    scanf("%f", &km);
    scanf("%f", &gas);
    kmporgas = media (km, gas);
    printf("%.3f km/l", kmporgas);

    return 0;
}

/*
Faça uma função que receba como parâmetro um número representando uma quantidade de horas e retorne essa quantidade convertida em minutos.

Na função principal, faça a leitura da quantidade de horas e a imprima convertida em minutos - como nos exemplos - utilizando a função criada anteriormente.

Dica: Trabalhe com inteiros.
*/

#include <stdio.h>

void horaemmin (int horas)
{
    int horaemmin;
    horaemmin = horas * 60;
    printf("%d horas = %d minutos", horas, horaemmin);
    return;
}

int main()
{
   int horas;
   scanf("%d", &horas);
   horaemmin (horas);

    return 0;
}