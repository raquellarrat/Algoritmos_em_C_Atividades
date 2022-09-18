/*
Utilizando a estrutura "Medidas" definida no exemplo, faça um programa que leia o peso e a altura de seis pessoas e imprima na tela a média das medidas do grupo.
*/

#include <stdio.h>
#define PESSOAS 6

typedef struct {
  float peso;
  float altura;
} Medidas;

int main() {
  
  Medidas pessoa[PESSOAS];
  int i;
  float somaPeso =0, somaAltura=0, mediaPeso, mediaAltura;
  
  for(i=0; i<PESSOAS; i++){
      scanf("%f", &pessoa[i].peso);
      somaPeso += pessoa[i].peso;
      scanf("%f", &pessoa[i].altura);
      somaAltura += pessoa[i].altura;
  }
  mediaPeso = somaPeso /PESSOAS;
  mediaAltura = somaAltura/PESSOAS;
  
  printf("Média Pesos: %.2f kg\n", mediaPeso);
  printf("Média Alturas: %.2f m", mediaAltura);
  
  return 0;
}

/* 
Uma hospital está coletando informações dos seus pacientes para uma pesquisa sobre hábitos alimentares. Para tal, um formulário é preenchido com as seguintes 
informações do paciente: nome (até 50 caracteres), idade (inteiro que expresse o número de anos de vida) e um vetor de tamanho 7 de inteiro, onde o paciente deve 
indicar, para cada dia da semana (segunda a domingo), quantas vezes toma refrigerante.

 

a) Crie uma estrutura chamada Paciente com os seguintes campos: 

char nome[51];

int idade;

int refrigerante[7];

b) Faça uma função que receba como parâmetros uma estrutura com os dados de um paciente e um inteiro k e imprima quantos dias da semana o paciente toma refrigerante mais de k vezes.

c) Faça um programa que leia os dados de um paciente em uma estrutura, um inteiro X e, a partir de uma chamada da função do item anterior, imprima o número de dias em que o paciente 
toma refrigerante mais do que X vezes.
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[51];
    int idade;
    int refrigerante[7];
} Paciente;


void funcao(Paciente a, int k){
    int cont =0, i;
    
    for(i=0; i<7; i++){
        if(a.refrigerante[i]>k){
            cont++;
        }
    }
    printf("%s toma mais que %d refrigerantes %d vezes por semana", a.nome, k, cont);
}

int main()
{
    int i, tam, x;
    Paciente a;
    
    fgets(a.nome, 51, stdin);
    tam = strlen(a.nome);
    a.nome[tam -1] = '\0';
    
    scanf("%d", &a.idade);
    
    for(i=0; i< 7; i++){
        scanf("%d%*c", &a.refrigerante[i]);
    }
    
    scanf("%d", &x);
    
    funcao(a, x);
    

    return 0;
}

/*

Crie um novo tipo de dado (struct)  chamado Matriz definido pelos seguintes campos:
 
float dados[100][100];
int lin;//define quantas linhas da matriz dados foram usadas
int col;//define quantas colunas da matriz dados foram usadas

 
Crie funções para executar as seguintes operações matriciais:
 
1. Leitura matricial: Uma função que não receba parâmetros, mas que retorne uma estrutura Matriz preenchida adequadamente. Leia primeiro o número de linhas e 
colunas e então faça a leitura da matriz conforme previamente estipulado.

2. Impressão matricial: Receba uma variável do tipo Matriz e a imprima na tela no formato de matriz usual. Utilize 2 casas decimais na impressão dos números reais.

3. Soma matricial: Receba 2 variáveis do tipo Matriz e retorne uma variável do tipo Matriz com a soma destas matrizes. Considere que a dimensão das matrizes é 
compatíveis com a operação, ou seja não é necessário verificar.

4. Subtração matricial: Receba 2 variáveis do tipo Matriz e retorne uma variável do tipo Matriz com a subtração destas matrizes. Considere que a dimensão das 
matrizes é compatíveis com a operação, ou seja não é necessário verificar.

5. Produto matricial: Receba 2 variáveis do tipo Matriz e retorne uma variável do tipo Matriz com a multiplicação destas matrizes. Considere que a dimensão 
das matrizes é compatíveis com a operação, ou seja não é necessário verificar.

6. Faça um programa para ler 2 variáveis Matriz e imprimir o resultado das operação de soma; ler outras 2 variáveis Matriz e imprimir o resultado da subtração; 
ler outras 2 variáveis Matriz e imprimir o resultado da multiplicação.
*/

#include <stdio.h>


typedef struct
{
    float dados[100][100];
    int lin;
    int col;
} Matriz;


Matriz leitura(){
    Matriz a;
    int i, j;
    scanf("%d", &a.lin);
    scanf("%d", &a.col);
    
    for(i=0; i<a.lin; i++){
        for(j=0; j<a.col; j++){
            scanf("%f", &a.dados[i][j]);
        }
    }
    return a;
}

Matriz soma(Matriz a, Matriz b){
    
    int i, j;
    Matriz resultadoSoma;
    resultadoSoma.lin = a.lin;
    resultadoSoma.col = a.col;
    for(i=0; i<a.lin; i++){
        for(j=0; j<a.col; j++){
            resultadoSoma.dados[i][j] = a.dados[i][j] + b.dados[i][j];
        }
    }
    return resultadoSoma;
}

Matriz subtracao(Matriz a, Matriz b){
    
    int i, j;
    Matriz resultadoSubtracao;
    resultadoSubtracao.lin = a.lin;
    resultadoSubtracao.col = a.col;
    for(i=0; i<a.lin; i++){
        for(j=0; j<a.col; j++){
            resultadoSubtracao.dados[i][j] = a.dados[i][j] - b.dados[i][j];
        }
    }
    return resultadoSubtracao;
}


Matriz multiplicacao(Matriz a, Matriz b){  
  
    Matriz produto;
    produto.lin = a.lin;
    produto.col = b.col;

    for (int i = 0; i < a.lin; i++) {
        for (int k = 0; k < b.col; k++) {
            produto.dados[i][k] = 0;
            for (int j = 0; j < a.col; j++) {
                produto.dados[i][k] += a.dados[i][j] * b.dados[j][k];
            }
        }
    }
    return produto;
}

void impressao(Matriz x){
    int i, j;
    for(i=0; i<x.lin; i++){
        for(j=0; j<x.col; j++){
            printf("%.2f ", x.dados[i][j]);
        }
        printf("\n");
    }

    
}


int main() {
    Matriz a, b;
    Matriz sum, subtraction, produto; 
    
    a=leitura();
    b=leitura();
    sum = soma(a, b);
    printf("Soma:\n");
    impressao(sum);
    
    a=leitura();
    b=leitura();
    subtraction = subtracao(a, b);
    printf("Subtracao:\n");
    impressao(subtraction);
    
    a=leitura();
    b=leitura();
    produto = multiplicacao(a, b);
    printf("Multiplicacao:\n");
    impressao(produto);
    
    
  
  return 0;
}