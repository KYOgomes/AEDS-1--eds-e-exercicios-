#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{   
    int letraM=0;
    int letram=0;
    int extra=0;
    char palavra [80];
    printf("\nDigite uma palavra:");
    scanf("%s",palavra);

    int tamanho = strlen (palavra);
    
    printf("\n A plavra e -->%s", palavra);
    
    for (int i=0; i<tamanho; i++)
    {
        if(palavra[i]>='A' && palavra[i]<='Z')
        {
            letraM ++;
            printf("\n%c e maiusculo", palavra[i]);
        } 
        else if(palavra[i]>='a' && palavra[i]<='z'){
            letram++;
            printf("\n%c e minuscolo", palavra[i]);
        } 
        else {
            extra++;
            printf("\n%c e extra", palavra[i]);
        }
    };
    
    printf("\n %i letras maiusculas foram identificadas", letraM);
    printf("\n %i letras minusculas foram identificadas", letram);
    printf("\n %i simbolos foram identificadas", extra);
    
    return 0;
} 