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
        if ((palavra[i] >= 'A' && palavra[i] <= 'Z') || (palavra[i] >= 'a' && palavra[i] <= 'z') || (palavra[i] >= '0' && palavra[i] <= '9')) 
        {
            geral++;
        }
        else 
        {
            extra++;
            printf("%c \n", palavra[i]);
        }
    }
    printf("\n\nO numero de simbolos desconsiderando numero eh: %i\n", extra);
    return 0;
}