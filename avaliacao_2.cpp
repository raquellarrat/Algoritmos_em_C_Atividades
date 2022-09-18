/*
Para testar os seus alunos, um professor apresentou mensagens em  que foram inseridos símbolos “$” no lugar de alguns caracteres. Os alunos deveriam então ler a mensagem colocando os 
símbolos corretos. Assim, uma mensagem da forma “Es$a me$sagem $sta codific$da” corresponde a mensagem “Essa mensagem esta codificada”. 

Para resolver esta questão, deve-se fazer:

a) Uma função que receba duas strings, uma representando um texto apresentado pelo professor e outra representando a string original. A função deve realizar a correção da string e 
devolver quantos caracteres foram modificados.

b) Um programa que leia uma string modificada e a string original, chame a função do item a), imprima a string corrigida e o número de caracteres modificados 
*/

#include <stdio.h>
#include <string.h>
#define TAM 1000

int funcao(char a[], char b[]){
    int t, i, cont = 0;
    
    t = strlen(a);
    for(i=0; i<t; i++){
        if(a[i] == '$'){
            a[i] = b[i];
           cont++; 
        }
    }
    return cont;
    
}

int main()
{
    char a[TAM];
    char b[TAM];
    int num, t;
    
    
    fgets(a, TAM, stdin);
    t= strlen(a);
    a[t-1] = '\0';
    fgets(b, TAM, stdin);
    b[t-1] = '\0';
    num = funcao(a, b);
    
    printf("String corrigida: ");
    puts(a);
    printf("Número de caracteres modificados: %d", num);

    return 0;
}
/*
Um órgão de pesquisa vem utilizando imagens de satélite para acompanhar o desmatamento na mata atlântica em um período de 6 meses. Desde agosto, a cada mês, fotos de satélite foram
 feitas em 10 regiões demarcadas e numeradas. As fotos foram processadas, estimativas do desmatamento foram obtidas e registradas.

a) Defina constantes para representar o número de meses e o número de regiões demarcadas

b) Crie uma estrutura que represente um relatório mensal. Essa estrutura deve conter o mês (string) e um vetor com o percentual estimado de área desmatada em cada região (cada 
índice do vetor representa uma região).

c) Elabore uma função que receba como parâmetro um vetor contendo as estruturas que representam os relatórios mensais e um inteiro que representa o índice de um dos relatórios. 

A função deverá, inicialmente, calcular a média dos valores de desmatamento do relatório indicado e imprimir “Média de desmatamento de Z% em W”, onde Z representa o percentual médio 
calculado  e W é o identificador do mês. 

Em seguida, para cada região com percentual de desmatamento no relatório maior que média calculada, a função deverá imprimir “Região X: Y% de área desmatada em W”, onde X é o índice 
da região e Y é o percentual estimado de desmatamento na região. 

d) Elabore um programa que crie um vetor de estruturas de relatórios mensais para armazenar as informações e leia todos os dados de todos os meses. Em seguida, o programa deverá 
solicitar que o usuário informe o índice de um dos relatórios e chamar a função implementada na letra c. 

*/

#include <stdio.h>
#include <string.h>
#define meses 6 
#define regiao 10

typedef struct{
    char mes[20];
    float area[regiao];
} relatorio;

void funcao(relatorio vetor[], int indice){
    float media = 0;
    int i;
    for(i=0; i<regiao; i++){
        media += vetor[indice].area[i]; 
    }
    media = media/regiao;
    printf("Média de desmatamento de %.1f%% em ", media);
    puts(vetor[indice].mes);
    
    for(i=0; i<regiao; i++){
        if(vetor[indice].area[i] > media){
            printf("Região %d: %.1f%% de área desmatada em ", i, vetor[indice].area[i]);
            puts(vetor[indice].mes);
        }
    }
    
    
    
}

int main()
{
    relatorio vetor[meses];
    int i, j, indice, tam;
    for(i=0; i< meses; i++){
        fgets(vetor[i].mes, 20, stdin);

        for(j=0; j<regiao; j++){
            scanf("%f%*c", &vetor[i].area[j]);
        }
        tam=strlen(vetor[i].mes);
        vetor[i].mes[tam -1] = '\0';
    }
    scanf("%d", &indice);
funcao(vetor, indice);
    return 0;
}
