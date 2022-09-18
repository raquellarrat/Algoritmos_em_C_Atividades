/*
Para resolver este exercício, siga os passos abaixo:
1. Escreva uma função que receba como parâmetro uma string e inverta a ordem de seus caracteres.
2. Escreva uma função principal (main) que leia do teclado uma string, chame a função desenvolvida no item anterior e imprima na tela o resultado obtido.
*/

#include <stdio.h>
#include <string.h>
#define TAM 50

void inverteString(char string[]){
    
    int i;
    char aux;
    aux = 0;
    int tam = strlen(string);
    int j = tam - 2;
    for(i=0; i < (tam) /2; i++){
        aux = string[i];
        string[i] = string[j];
        string[j] = aux;
        
        
        j--;
    }
    return;  
}

int main() {
    
    char string[TAM];
    
    
    fgets(string, TAM, stdin);
    
   
    inverteString(string);
    
    puts(string);

  
  return 0;
}

/*
Para resolver este exercício, siga os passos abaixo:
1. Escreva uma função que receba como parâmetro uma string, conte quantos caracteres desta são iguais ao caractere 'a' e substitua-os por 'b'. 
Esta função deverá retornar quantos caracteres foram modificados.

2. Escreva uma função principal (main) que leia do teclado uma string, chame a função desenvolvida no item anterior e imprima na tela o resultado obtido (string e retorno).
*/

#include <string.h>
#include <stdio.h>
#define TAM 500

int substitui(char string[]){
    
    int i, cont = 0;
    int tam = strlen(string);
    
    for (i=0; i < tam; i++){
        if (string[i] == 'a'){
            string[i] = 'b';
            cont++;
        }
    }
    string[tam - 1] = '\0';
    return cont;
    
}



int main()
{
    int substituicoes;
    char string[TAM];
    
    fgets(string, TAM, stdin);
    
    substituicoes = substitui(string);
    
    puts(string);
    printf("Caracteres Modificados: %d", substituicoes);
    return 0;
}

/*
Solicitaram para que você construísse um programa simples de criptografia. Este programa deve possibilitar enviar mensagens codificadas sem que alguém consiga lê-las. O processo é muito simples. São feitas três passadas em todo o texto.

Na primeira passada, somente caracteres que sejam letras minúsculas e maiúsculas devem ser deslocadas 3 posições para a direita, segundo a tabela ASCII: letra 'a' deve virar letra 'd', letra 'y' deve virar caractere '|' e assim sucessivamente. Na segunda passada, a linha deverá ser invertida. Na terceira e última passada, todo e qualquer caractere, exceto espaço, a partir da metade em diante (truncada) devem ser deslocados uma posição para a esquerda na tabela ASCII. Neste caso, 'b' vira 'a' e 'a' vira '`'.

Por exemplo, se a entrada for “Texto #3”, o primeiro processamento sobre esta entrada deverá produzir “Wh{wr #3”. O resultado do segundo processamento inverte os caracteres e produz “3# rw{hW”. Por último, com o deslocamento dos caracteres da metade em diante, o resultado final deve ser “3# rvzgV”.

Entrada:

A entrada contém vários casos de teste. A primeira linha de cada caso de teste contém um inteiro N (1 ≤ N ≤ 104), indicando a quantidade de linhas que o problema deve tratar. As N linhas contém cada uma delas M (1 ≤ M ≤ 103) caracteres.

Saída:
Para cada entrada, deve-se apresentar a mensagem criptografada.
*/

#include <string.h>
#include <stdio.h>
#include <math.h>

#define M 1000

int main()
{
    int n, i, j;
    scanf("%d ", &n);
    char string[M];
    
    
    
    for(i=0; i < n; i++){
        
    fgets(string, M, stdin);
    
        
        int tam = strlen(string);
     
        /// primeira passada
        for(j=0; j<tam; j++){
            if((string[j] >= 'A' && string[j] <= 'Z') || (string[j] >= 'a' && string[j] <= 'z')){
                string[j] = string[j] + 3;
            }
        }
        ///segunda passada
        for(j=0; j < tam/2; j++){
            char aux;
            aux = string[tam - 2 - j ];
            string[tam - 2 - j] = string[j];
            string[j] = aux;
        }
        
        /// terceira passada
        int metade = trunc((tam-1)/2);
        for(j=metade; j <= tam; j++){
            if (string[j] != 32){
                
                string[j] = string[j] - 1;
            }
        }
        string[tam - 1] = '\0';   
        puts(string);
        
    }
    return 0;

}