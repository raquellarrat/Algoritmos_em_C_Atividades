/*
Faça o que se pede:

a) Desenvolva uma função que receba uma string e um inteiro, ind, representando um índice da string. A função deve retornar o número de dígitos (os caracteres que representam 
os números) encontrados a partir da posição indicada por ind. Caso o texto seja finalizado antes do índice indicado, a função deverá retornar o valor -1.

b) Faça um programa (função main) que leia do teclado uma string e um número inteiro e chame a função anterior. O programa deverá imprimir, dependendo do retorno da função, 
"Texto finalizado antes da posicao indicada" ou "Foram encontrados X digitos no texto apos a posicao indicada", onde X deve ser o número de dígitos contabilizados.

*/

#include <stdio.h>
#include <string.h>
#define tam 1000

int funcao(char string[], int ind){
    
    int t, cont = 0, i;
    t= strlen(string);
    if(t < ind){
        cont = -1;

    }
    else for(i=ind; i<t; i++){
        if(string[i] >= 48 && string[i] <= 57){
        cont++;
        }
    }
    return cont;
}

int main()
{
    char string[tam];
    int n, digitos, t;
    
    fgets(string, tam, stdin);
    t= strlen(string);
    string[t] = '\0';
    scanf("%d", &n);
    
    digitos = funcao(string, n);
    if (digitos == -1){
        printf ("Texto finalizado antes da posicao indicada");
    }    
    else printf("Foram encontrados %d digitos no texto apos a posicao indicada", digitos);
    


    return 0;
}

/*

Um sistema de linha de produção utiliza uma matriz para gerenciar os códigos de produtos. Periodicamente todos os produtos devem se deslocar em um determinado 
sentido único, sem alterar a posição relativa entre eles. Crie um programa que:

a) Crie uma função que receba duas matrizes quadradas , A e B (máximo 100x100), um inteiro k (máximo 100) representando o número de produtos (número de linhas/colunas) 
e um valor inteiro n, indicando o tamanho do deslocamento. Esta função deve copiar os elementos da matriz  A para a matriz  B deslocados n linhas para a baixo, realizando 
a volta se preciso (ex. se k = 10 e n = 11, a linha de índice 11 equivale à linha 1). 

b) Crie um programa principal que declare as variáveis necessárias, leia a dimensão das matrizes, a matriz A e n com valores do teclado. Além disso, imprima na tela a 
matriz B após a execução da função de (a).
*/

#include <stdio.h>
#define TAM 100

void funcao(int A[][TAM], int B[][TAM], int dimensao, int n ){
    int i, j;
    
    if(n>dimensao){
    for(i = 0; i< dimensao; i++){
        for(j =0; j<dimensao; j++){
        B[n-dimensao-1+i][j] = A[i-1][j];
            
        }
    }
    
    for(i=0;i<n-dimensao;i++){
        for(j=0; j<dimensao;j++){
    B[i][j] = A[i+dimensao-(n-dimensao)][j];
        }
    }

    }
    else     for(i = 0; i< dimensao; i++){
        for(j =0; j<dimensao; j++){
            if(dimensao > i+n){
            B[i+n][j] = A[i][j];
            }
            else
            B[i +n - 5][j] = A[i][j];
        }
    }
}


int main()
{
    int dimensao, i, j, n;
    int A[TAM][TAM], B[TAM][TAM]; 
    scanf("%d", &dimensao);
    
    for(i=0; i < dimensao; i++){
        for(j=0; j<dimensao; j++){
            scanf("%d", &A[i][j]);
        }
    }
    scanf("%d", &n);
    
    funcao(A, B, dimensao, n);
    
    for(i=0; i < dimensao; i++){
        for(j=0; j<dimensao; j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }   
    
    
    

    return 0;
}

/*
Um documento publicado em setembro de 2019 aponta que a produção brasileira de leite em 2018 atingiu 33,8 bilhões de litros. De acordo com o estudo, 
as regiões Sul e Sudeste, com participação de 34,2% e 33,9%, respectivamente, lideram a produção nacional. O Brasil atingiu média de produtividade de
 2.069 litros de leite por vaca no ano. Sendo a região sul responsável pelo aumento da produtividade, com 3.437 litros/vaca/ano. Os três estados do Sul 
 tiveram produtividades superiores a 3.200 litros/vaca/ano. Em seguida, aparece Minas Gerais, com 2.840 litros de leite por vaca no ano. 

De olho nesses números, um produtor mineiro resolveu registrar mensalmente a quantidade de litros de leite ordenhado de uma de suas melhores vacas durante um ano. 

a) Crie uma estrutura  chamada Est_Vaca capaz de armazenar o nome da fazenda, o código identificador da vaca e sua produção mensal no período de um ano. Seguem os campos:

      char nome_fazenda[71]

      int id_vaca

      float litros_ordenhados[12]

b) O produtor mineiro deseja verificar se sua vaca consegue alcançar uma produção semelhante à produção dos estados da região Sul do Brasil. Para isso, 
faça uma função que receba como parâmetros uma estrutura Est_Vaca com os dados da vaca. Sua função deve retornar 1, caso a vaca consiga uma produção total 
superior ou igual a 3200 litros, e deverá retornar 0 caso contrário.    

c) Faça um programa que leia os dados da vaca armazenando-os numa estrutura. A partir de uma chamada da função do item anterior, imprima uma das mensagem: 
"Produção superior ou igual a 3200 litros" ou "Baixa produtividade".
*/

#include <stdio.h>
#include <string.h>

typedef struct{
    char nome_fazenda[71];
    int id_vaca;
    float litros_ordenhados[12];
} Est_Vaca;

int funcao(Est_Vaca a){
    float soma = 0;
    int i;
    for(i=0; i<13; i++){
        soma += a.litros_ordenhados[i];
    }
    if (soma > 3200){
        return 1;
    }
    else return 0;
    
}

int main()
{
    int i, retorno;
    Est_Vaca a;
    fgets(a.nome_fazenda, 71, stdin);
    scanf("%d", &a.id_vaca);
    for(i=0; i<13; i++){
        scanf("%f%*c", &a.litros_ordenhados[i]);
    }
    
    retorno = funcao(a);
    
    if(retorno == 1){
        printf("Produção superior ou igual a 3200 litros");
    }
    else printf("Baixa produtividade");
    

    return 0;
}