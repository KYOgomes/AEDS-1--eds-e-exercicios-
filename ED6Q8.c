#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void recursao(char cadeia[], int i, int par)
{
    int eh = par;
    if(strlen(cadeia)>i)
    {
        if(cadeia[i]%2==0)
        {
            par++;
            printf("\n%c eh um caractere par", cadeia[i]);
        }
        
        recursao(cadeia, ++i, par);
    }
    printf("\n %i sao os pares totais", par);
}
int main(void)
{
    char palavra[100];
    int par = 0;
    printf("___Caracteres pares:___\n");
    scanf("%s",palavra);
    getchar();
    recursao(palavra, 0, par);
    getchar();
    
    return 0;
}
