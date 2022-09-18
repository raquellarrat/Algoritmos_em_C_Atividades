/*
Faça um programa que leia um valor de salário mínimo e o valor do salário de um funcionário. 
Seu programa deve calcular e imprimir quantos salários mínimos este funcionário ganha.
Utilize 2 casas decimais em suas impressões. 
*/

#include <stdio.h>

int main()
{
float salario, sal_min, quant_min;
    
    scanf("%f", &sal_min);
    scanf("%f", &salario);
    
    quant_min = salario/sal_min;
    
    printf ("O salário do funcionário equivale a %.2f salários mínimos.\n", quant_min);
    return 0;
}

/*
Faça um programa que leia o preço de um produto e imprima na tela o valor deste com 25% de desconto. 
Imprima o resultado em moeda real (R$) utilizando 2 casas decimais. 
*/
#include <stdio.h>

int main()
{
    float val_prod, desconto, val_descont;
    
    desconto = 0.75;
    
    scanf("%f", &val_prod);
    
    val_descont = val_prod * desconto;
    
    printf("O valor do produto com 25%% desconto é de R$%.2f.", val_descont);
    return 0;
}

/*
Faça um programa que leia 2 números reais e calcule a soma e imprima o resultado com 2 casas decimais.

Dica: Utilize o comando %.2f para limitar para duas casas decimais a formatação dos números reais.
*/

#include <stdio.h>

int main()
{
    float num1, num2, soma;
    
    scanf("%f", &num1);
    scanf ("%f", &num2);
    
    soma = num1 + num2;
    
    printf("%.2f + %.2f = %.2f", num1, num2, soma);
    return 0;
}