//AUTOR: Caio Gomes Alcântara Glória
//MATRICULA: 763989
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int quantidade(int tamanho, char palavra[80])
{
    int maiusculo=0;
    for (int i=0; i<tamanho; i++)
    {
        if((palavra[i]>='A' && palavra[i]<='Z'))
        {
            maiusculo ++;
            printf("\n%c atende os requisitos", palavra[i]);
        } 
        else 
        {
            printf("\n%c descartado", palavra[i]);
        } 
    };
    
    return maiusculo;
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
    
    for (int i = 0; tamanho > i; i++) 
    {
    if ((palavra[i] >= 'J') && (palavra[i] <= 'Z')) {
      printf("\nO caractere %c eh maiusculo > J", palavra[i]);
      pedido++;
    }
    }
    
    printf("\n\n %i sao maiores que J e sao maiusculas ", pedido);
   
    
    return 0;
} 