#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int recursao(char cadeia[], int i, int maiu)
{
    if(strlen(cadeia)>i)
    {
        if (cadeia[i] >= 'A' && cadeia[i] <= 'Z')
        {
            maiu++;
            printf("\n%c eh maiucula", cadeia[i]);
        } else  
            {
            printf("\nnada");
            } 
        recursao(cadeia, ++i, maiu);
    }
    return maiu;
    
}
int main(void)
{
    char palavra[100];
    int maiu=0;
    printf("___Digite uma cadeia de caracteres:___\n");
    scanf("%s",palavra);
    getchar();
    maiu =recursao(palavra, 0, maiu);
    printf("\n %i = maiusculas", maiu);
    return 0;
}

