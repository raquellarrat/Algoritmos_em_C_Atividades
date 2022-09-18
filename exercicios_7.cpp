/*
Dado dois inteiros M e N, siga os passos abaixo:

1. Escreva uma função que receba como parâmetro uma matriz A de tamanho MxN, um vetor V e outro vetor R(de M elementos). Armazene o produto de A por V em R.

2. Escreva uma função principal (main) que declare e leia a matriz A e o vetor V, além disso declare também o vetor R. Chame a função anterior para calcular 
o produto matriz vetor. Ao final, imprima o vetor R de resultado.
*/

#include <stdlib.h>
#include <stdio.h>
#define M 5
#define N 5

void funcao(float A[M][N], float V[], float R[], int tam){
    
    int i, j;
    
    for(i = 0; i<5; i++){
        R[i] = 0;
    }
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            R[i] += A[i][j] * V[j];
        }
    }
}

int main()
{
    float A[M][N];
    int tam=5;
    float V[M], R[M];
    int i, j;
    
    for(i=0; i < M; i++){
        for(j=0; j<N; j++){
            scanf("%f", &A[i][j]);
        }
    }
    
    for(i=0; i<M; i++){
        scanf("%f", &V[i]);
    }
    
    funcao(A, V, R, tam);   
    

    
    for(i=0; i<M; i++){
        printf("%.2f\n", R[i]);
    }    
    


    return 0;
}

/*
Dado um inteiro N, siga os passos abaixo:

1. Escreva uma função que receba como parâmetro uma matriz inteira A de tamanho 10x10. Imprima a localização (linha e a coluna) do maior valor.

2. Escreva uma função principal (main) que declare e leia os elementos de A. Chame a função anterior.
*/
#include <stdio.h>
#include <stdlib.h>

void funcao(int matriz[10][10]){

int auxi = 0, auxj =0, i, j;

for(i=0; i<10; i++){
   for(j=0; j<10; j++){
   if(matriz[i][j] > matriz[auxi][auxj]){
    auxi = i;
    auxj =j;
}
}
}
 
printf("%d %d", auxi, auxj);
}

int main()
{
   int matriz[10][10];
   int i, j;

   for(i=0; i<10; i++){
    for(j=0; j<10; j++){
    scanf("%d", &matriz[i][j]);
}

}

   funcao(matriz);

    return 0;
}

/*
Para resolver este exercício, siga os passos abaixo:
1. Escreva uma função que receba como parâmetro um vetor e uma matriz de valores reais com dimensões compatíveis e multiplique o vetor pela matriz.
 O resultado final deve ser colocado no próprio vetor de entrada.

2. Escreva uma função principal (main) para ler um vetor de três posições e uma matriz quadrada com três dimensões, chamar a função desenvolvida no 
item anterior e imprimir na tela o resultado da multiplicação. Utilize 1 casa decimal nas impressões.
*/

#include <stdio.h>
#define TAM 3

void funcao(float matriz[][3], float vetor[3], int tam){
    int i, j;
    
    float aux[3];
    
    for(i=0; i<3; i++){
    aux[i] = vetor[i];
    }
    for(i=0; i<3; i++){
    vetor[i] = 0;
    }
    for(i=0; i<3; i++){
       for(j=0; j<3; j++){
         vetor[i] += aux[j] * matriz[j][i];
    
       }
    }
}

int main()
{
    float vetor[3];
    float matriz[TAM][TAM];
    int i, j, tam=3;
    
    for(i=0; i<3; i++){
    scanf("%f", &vetor[i]);
    }
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
          scanf("%f", &matriz[i][j]);
        }
    }
    

    
    funcao(matriz, vetor, tam);
    
    printf("Resultado = [ %.1f %.1f %.1f ]", vetor[0], vetor[1], vetor[2]);
    
    
    


    return 0;
}