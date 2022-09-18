/*
Para resolver este exercício, siga os passos abaixo:
1. Escreva uma função que receba como parâmetro um inteiro (dia da semana) e imprima o seu nome por extenso. Considere que o número 1 representa o domingo; 2 
a segunda-feira, etc. Caso o número não corresponda a um dia da semana, a função deve exibir a mensagem "Dia da semana inválido!".

2. Escreva uma função principal (main) que leia do teclado um número inteiro e chame a função desenvolvida no item anterior.
*/

#include <stdio.h>

int diadasemana (int dia)
{
    
    
    switch(dia)
{   
    case 1: printf ("Domingo!");
            break;
    case 2: printf ("Segunda-feira!");
            break;
    case 3: printf ("Terça-feira!");
            break;
    case 4: printf ("Quarta-feira!");
            break;   
    case 5: printf ("Quinta-feira!");
            break;
    case 6: printf ("Sexta-feira!");
            break;
    case 7: printf ("Sábado!");
            break;
    default: printf ("Dia da semana inválido!");
}    
    return 0;
}



int main()
{
    int dia;
    scanf("%d", &dia);
    
    diadasemana(dia);

    return 0;
}

/*
Escrever uma função que leia a matrícula e as três notas obtidas por um aluno durante o semestre. Calcular a sua média (aritmética), imprimir a matrícula e 
sua menção aprovado (media >= 7), Reprovado (media <= 5) e Recuperação (média entre 5.1 a 6.9). O programa para chamar a função já esta implementado ao lado, 
implemente apenas a função.
*/

#include <stdio.h>

int avaliacao()

{
    int matricula;
    float n1, n2, n3;
    float media;
    scanf("%d %f %f %f", &matricula, &n1, &n2, &n3);
    
    media = (n1 + n2 + n3) / 3;
    
    if (media>=7)
                            printf ("%d Aprovado", matricula);
                    
    else
        if (media <= 5)
                            printf ("%d Reprovado", matricula);
            else
                if (media>=5.1 && media <= 6.9)
                            printf("%d Recuperacao", matricula);
                    
    return 0;
}                    



int main()
{
    avaliacao();

    return 0;
}

/*
Faça um programa para ler o código de um produto do teclado e informar sua origem.
 
Código do produto entre 01 e 20: "Europa";
Código do produto entre 21 e 40: "Ásia";
Código do produto entre 41 e 60: "América";
Código do produto entre 61 e 80: "África";
Código do produto maior que 80: "Paraguai";
Código fora das faixas de valores acima: "Código Inválido".
*/

#include <stdio.h>

          
int main()
{
    int codigo;
    scanf("%d", &codigo);
{    
if (codigo >=01 && codigo <= 20)
                    printf("Europa");
        
else
    if (codigo >=21 && codigo <=40 )
                    printf("Ásia"); 
                
    else
        if (codigo >=41 && codigo <=60)
                    printf("América");   
                    
        else
            if (codigo >= 61 && codigo <= 80)
                    printf ("África");
                                  
            else
                if (codigo > 80)
                    printf ("Paraguai");
                else 
                    printf("Código Inválido");
}
    return 0;
}
