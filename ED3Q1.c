//variavel string necessaria 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{   
    // declarando variavel letra=0 pra começar com a primeira 
    int letra=0;

    //char palavra[80] define a quantidade de letras que essa palavra pode ter;
    char palavra [80];

    //digitar a palavra 
    printf("\nDigite uma palavra:");
    scanf("%s",palavra);

    int tamanho = strlen (palavra);
    
    for (int i=0; i<tamanho; i++)
    {
        if(palavra[i]>='A' && palavra[i]<='Z')
        {
            printf("\t%c", palavra[i]);
        }
    }
    
    return 0;
} 