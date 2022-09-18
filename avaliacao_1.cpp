/*
Em uma nova linha de crédito, um banco está liberando um tipo de empréstimo onde não há cobrança de nenhum tipo de taxa. Neste tipo de empréstimo, o valor solicitado pelo 
cliente é dividido pelo número de parcelas solicitadas. Existem apenas duas restrições: o valor solicitado deve ser igual ou inferior a R$15.000,00 e o valor da parcela não 
pode ser inferior a R$500,00.

 

Para resolver esta questão, siga os passos abaixo:

(A) Faça uma função que receba como parâmetro as informações referentes a uma solicitação de empréstimo, sendo estas: o valor solicitado e o número de parcelas desejado. 
Para uma dada solicitação, caso os dados da solicitação atendam às duas restrições, imprima o valor total, o valor das parcelas e o número de parcelas. Caso contrário, 
imprima uma mensagem indicando que a solicitação não poderá ser atendida. 

 

(B) Faça um programa (main) que leia os dados referentes a várias solicitações de empréstimo (valor e número de parcelas). Para cada solicitação, seu programa deve chamar a 
função definida no item (A), passando por parâmetro as informações necessárias.

O programa deve finalizar quando for lido um valor 0 (zero) para o valor do empréstimo.

*/

#include <stdio.h>

void funcao(float valor,int parcelas){
    
    float x;
    x = valor/parcelas;
   
   if(valor <= 15000 && x >=500){
       printf("Valor R$ %.2f (%d Parcelas de R$ %.2f\n", valor, parcelas, x);
   } 
   if(valor > 15000 || x < 500){
       printf("Solicitacao nao podera ser atendida.\n");
   }
   return;
}

int main()
{
    float valor;
    int parcelas;
    
    scanf("%f", &valor);
    while(valor !=0){
        scanf("%d", &parcelas);
        funcao(valor, parcelas);
        scanf("%f", &valor);
    }

    return 0;
}


/*
Escreva uma função para o cálculo do auxílio emergencial durante a pandemia COVID19 disponibilizado por um governo fictício. A função recebe como parâmetros três 
vetores (famílias, rendas, pagamentos) e o número de famílias cadastradas. Cada posição dos vetores famílias e rendas armazena o número de pessoas na família e a 
renda familiar, respectivamente. 

 

Sabe-se que terá direito ao recebimento se a renda familiar mensal total é de até três salários mínimos (R$ 3.135,00).

 

Assim sua função deve:

a) Para cada família, verificar se ela satisfaz o critério de recebimento.

b) Calcular e armazenar em pagamentos o valor do benefício seguindo as seguintes regras: 

Valor base do benefício (VBB) : R$2000,00.

Valor do benefício por família: VBB + 25% do VBB por pessoa.

c) Imprimir o número de famílias que não satisfazem o critério de recebimento do auxílio. 

 

Escreva a função principal que lê o número de famílias e os vetores familias e renda, chame a função e imprima os pagamentos calculados.

*/

#include <stdio.h>

void funcao(int familias[], float rendas[], float pagamentos[], int numfamilias){
    
    int i, satisfaz=0, naoSatisfaz =0, j=0;
    
    for(i = 0; i < numfamilias; i++){
        if(rendas[i] > 3135){
            naoSatisfaz++;
            pagamentos[j] = 0;
            
        }
        if (rendas[i] <= 3135){
        satisfaz++;
        pagamentos[j] = 2000 + (500 * familias[i]);
        }
        j++;
    }
    printf("Número de famílias que não receberam o auxílio: %d\n", naoSatisfaz);
    return;
}

int main()
{
    int numfamilias, i;
    
    scanf("%d", &numfamilias);
    
    int pessoas[numfamilias];
    float rendas[numfamilias], pagamentos[numfamilias];
    
    for(i=0; i < numfamilias; i++){
        scanf("%d", &pessoas[i]);
        scanf("%f", &rendas[i]);
    }
    funcao(pessoas, rendas, pagamentos, numfamilias);
    
    for(i=0; i<numfamilias; i++){
        printf("Pagamentos: %.2f\n", pagamentos[i]);
    }

    

    return 0;
}
