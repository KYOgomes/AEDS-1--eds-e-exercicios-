#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int tamanho = 0, extra = 0, geral = 0;
    char palavra[80];
    printf("Digite uma palavra:");
    scanf("%s", palavra);

    tamanho = strlen(palavra);


    for (int i = 0; i < tamanho; i++) 
    {
        if ((palavra[i] >= 'A' && palavra[i] <= 'Z') || (palavra[i] >= 'a' && palavra[i] <= 'z')) 
        {
            geral++;
        }
        else 
        {
            extra++;
            printf("%c \n", palavra[i]);
        }
    }
    if(extra==tamanho)
    {
        printf("\n A PALAVRA E COMPOSTA APENAS POR SIMBOLOS");
    }
    printf("\n\nO numero de restos eh: %i\n", extra);
    return 0;
}