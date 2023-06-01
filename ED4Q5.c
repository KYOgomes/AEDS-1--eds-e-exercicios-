//AUTOR: Caio Gomes Alcântara Glória
//MATRICULA: 763989
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int quantidade(int tamanho, char palavra[80])
{
    int maior=0;
    int maiorMinuscula=0;
    for (int i=0; i<tamanho; i++)
    {
        if((palavra[i]>='J' && palavra[i]<='Z'))
        {
            maior ++;
            printf("\n%c atende os requisitos", palavra[i]);
        } 
        else if((palavra[i]>='j' && palavra[i]<='z'))
        {
            maiorMinuscula++;
            printf("\n%c atende os requisitos", palavra[i]);
        } else 
            {
                printf("\n%c descartado", palavra[i]);
            }
    };
    printf("\n %i sao MAIUSCULAS > 'j' e %i sao minusculas > 'j' ", maior, maiorMinuscula);
    
    return maior;
}

int main()
{   
    int pedido=0;
    char palavra [80];
    
    printf("\nDigite uma palavra:");
    scanf("%s",palavra);
    getchar();
    int tamanho = strlen (palavra);
    
    printf("\n A plavra e -->%s\n", palavra);
    
    pedido = quantidade(tamanho, palavra);
   
    
    return 0;
} 