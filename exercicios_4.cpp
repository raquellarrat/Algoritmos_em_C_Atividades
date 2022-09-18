/*
Para resolver este exercício, siga os passos abaixo:
1. Escreva uma função que receba um valor n por parâmetro e retorne seu fatorial.
2. Escreva uma função principal (main) para ler um valor n, chamar a função desenvolvida no item anterior e imprimir na tela o resultado obtido.
*/

#include <stdio.h>


double fatorial(double n)
{
    double fatorial = 1.0, i;
    for (i = 1.0; i <= n; i++)
        fatorial *= i;
    return fatorial;
}


int main()
{
    double num;
    scanf("%lf", &num);
    printf("%0.lf! = %0.lf", num, fatorial(num));
    return 0;
}

/*
Para resolver este exercício, siga os passos abaixo:
1. Escreva uma função que retorne o valor total a ser pago em uma compra de supermercado. A função deve ler a quantidade e o preço unitário de cada produto, 
atualizando o subtotal a cada iteração do laço. Considere que a compra será encerrada quando for digitado um valor menor ou igual a zero para a quantidade de um produto.
2. Escreva uma função principal (main) para chamar e imprimir o resultado de sua função.
*/

#include <stdio.h>
void total(){
    int quant;
    float preco;
    float total = 0;
    scanf ("%d", &quant);
    while(quant > 0){
    
    scanf ("%f", &preco);
    total += quant * preco;
    scanf ("%d", &quant);
    }
    printf("Total: R$%.2f.", total);
}
int main()
{
    total();

    return 0;
}

/*
A sequência de Fibonacci é uma das sequências mais famosas do mundo. Os termos de Fibonacci são sempre iguais à soma dos dois termos anteriores a eles na 
sequência, e os dois primeiros termos são 1. Ou seja:

1 , 1, 2, 3, 5, 8, 13, 21, 34 ...
Porém, não estamos interessados em achar os termos da sequência de Fibonacci, mas sim os termos da sequência de Fibonot!

A sequência de Fibonot é composta pelos números que não pertencem à sequência de Fibonacci. Mais especificamente, os números inteiros positivos não-nulos. Em ordem crescente!

Eis os primeiros termos de Fibonot:

4, 6, 7, 9, 10, 11, 12, 14, 15 ...
Sua tarefa é achar o K-ésimo número de Fibonot.
*/

#include <stdio.h>


int main()
{
 int i;                    
 int j;                    
 int k,n1,n2;              
 int cont;
 int cont2 = 0, soma = -1, somaindice, contador;

    scanf("%d", &i);

    if(i < 10)
    {
        j = i + 5;
    }
    else
    {
        j=i;
    }

    int fibonacci[j];   
    int fibonot[i];    
    
    for(cont=0;cont < j;cont++) 
    {
        fibonacci [cont] = 0;
    }

    fibonacci[0]=1;
    fibonacci[1]=1;

    for(cont = 2; cont < j; cont++) 
    {
        fibonacci[cont] = fibonacci [cont - 2] + fibonacci [cont-1];
    }

    for(cont = 0; cont < i; cont++) 
    {
        fibonot[cont]=0;
    }

    for(cont = 3; cont < j - 1; cont++) 
    {
        n1 = fibonacci[cont];
        n2 = fibonacci[cont+1]; 
        k = n2 - n1 - 1;             
        contador = 0;
        somaindice = 0;

        for(cont2 = soma + 1; contador < k; cont2++)
        {
            somaindice++;
            fibonot[cont2] = n1 + somaindice;

            if(fibonot[i - 1] > 0)  
            {
            break;
            }

            soma++;
            contador++;
         }

        if(fibonot[i - 1] > 0)  
        {
            break;
        }
    }

 printf("%d",fibonot[i - 1]);
 
 return 0;
}