/*
Um professor resolveu criar uma regra para avaliar a interação entre um grupo de alunos ao longo do semestre. Considere que será avaliado um grupo de 
quatro alunos e que a regra diz que cada integrante deste é responsável por dar uma nota para os outros três colegas. Faça um programa que calcule as 
notas de um grupo de alunos lendo do teclado as notas obtidas por cada integrante e imprimindo a média das notas que cada aluno recebeu. Assuma que as 
notas atribuídas sempre estarão entre 1 e 10.
 
Dica: Use um vetor para armazenar em cada posição a soma das notas recebidas por cada estudante. Observe que não é necessário armazenar as notas individuais 
de um aluno, apenas a soma de suas notas.
*/

#include <stdio.h>
#define ALUNOS 4

int main()
{
    float vetorsoma[ALUNOS], nota, soma;
    int i, j;
    float media1, media2, media3, media4;
    
    for(i = 0; i < 4; i++){
       soma = 0;
    for (j = 1; j <= 3; j++){
   
       scanf ("%f", &nota);
       if ( nota <= 10 && nota >= 1){
       soma += nota;
       }
       else;
    }
    vetorsoma[i] = soma;
    
    }
    media1 = vetorsoma[0] / 3;
    media2 = vetorsoma[1] / 3;
    media3 = vetorsoma[2] / 3;
    media4 = vetorsoma[3] / 3;
    printf("Média Aluno 01: %.1f\n", media1);
    printf("Média Aluno 02: %.1f\n", media2);
    printf("Média Aluno 03: %.1f\n", media3);
    printf("Média Aluno 04: %.1f\n", media4);
    
    
    
    return 0;
}
/*
Implemente uma função que receba um vetor de inteiros e seu tamanho, a função deve retornar o maior número do vetor. Faça o programa principal 
que leia o tamanho do vetor e seus valores, o programa deve chamar a função criada e imprimir o valor retornado.
*/

#include <stdio.h>
#include <stdlib.h>

void maiorvetor (int numero[], int tam)
{
    int j, maior;
    
    maior = 0;
    for (j = 0; j < tam; j++){
    
        if (numero[j] > maior){
            maior = numero[j];
        }
        else;
    
    }
    printf("%d", maior);
}

int main()
{
    int tam, i, num;
    scanf("%d", &tam);
    int numeros[tam];
    
    for (i = 0; i < tam; i++){
        scanf("%d", &num);
        numeros[i] = num;
    }
   
   maiorvetor(numeros, tam);
    return 0;
}

/*
Faça um programa com três vetores de números reais v1, v2 e v3 de tamanhos N, N e 2N, respectivamente. Leia o valor de N e preencha v1 e v2 com valores
 do teclado, assumindo que cada vetor será preenchido por uma sequência crescente. Considere que N poderá ser no máximo 50.

Seu programa deverá copiar os elementos de v1 e v2 para v3, de forma que, ao final do processamento, o vetor v3 contenha todos os elementos de v1 e v2 em ordem crescente. 

Observação importante: após o preenchimento do vetor, cada vetor só poderá ser percorrido apenas uma vez.
*/

#define N 50
#include <stdio.h>

int main()
{
    float v1[N], v2[N], v3[2 * N], num;
    int tam, i;
    
    scanf("%d", &tam);
    
    for(i = 0; i < tam; i++){
       scanf("%f", &num);
       v1[i] = num;
    }
    
    for(i = 0; i < tam; i++){
       scanf("%f", &num);
       v2[i] = num;
    }
    
    for( i = 0; i < tam; i++){
        v3[i] = v1[i];
    }
    int j = 0;
    for(i = tam; i < tam * 2; i++){
        v3[i] = v2[j];
        j++;
    }
    
   
   int aux = 0;


    for (int i = 0; i < tam * 2; i++){
        for (int j = 0; j < tam * 2 ; j++){
            if (v3[i] < v3[j]){

            aux = v3[i];
            v3[i] = v3[j];
            v3[j] = aux;
            }
        }
    }
    
    
    printf("Vetor v3:\n");
    for(i = 0; i < tam * 2; i++){
        printf("v[%d] = %.2f\n", i, v3[i]);
    }
    
    
    
    

    return 0;
}
