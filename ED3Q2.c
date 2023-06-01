#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{   
    int letra=0;
    char palavra [80];
    printf("\nDigite uma palavra:");
    scanf("%s",palavra);

    int tamanho = strlen (palavra);
    
    printf("\n A plavra e -->%s", palavra);
    for (int i=0; i<tamanho; i++)
    {
        if(palavra[i]>='A' && palavra[i]<='Z')
        {
            letra ++;
            printf("\n%c", palavra[i]);
        }
    }
    printf("\n %i letras maiusculas foram identificadas", letra);
    
    return 0;
} 