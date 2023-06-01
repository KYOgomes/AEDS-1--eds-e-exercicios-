#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void recursao(char cadeia[], int i)
{
    if(strlen(cadeia)>i)
    {
        printf("\n%c",cadeia[i]);
        recursao(cadeia, ++i);
    }
}
int main(void)
{
    char palavra[100];
    printf("___Digite uma cadeia de caracteres:___\n");
    scanf("%s",palavra);
    getchar();
    recursao(palavra, 0);
    getchar();
    
    return 0;
}
