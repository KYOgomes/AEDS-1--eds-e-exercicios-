#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{   
    int numeros =0, j=0;
    char string [80];
    char string2 [80];
    printf("\nDigite uma palavra:");
    scanf("%s",string);

    int tamanho = strlen (string);
    
    printf("\n A plavra e -->%s", string);
    
    for (int i=0; i<tamanho; i++)
    {
        if(string[i]>='0' && string[i]<='9')
        {
            numeros++;
        } 
        else 
        {
            string2[j]=string[i];
            j++;
        }
    };

    printf("\n a segunda string = %s", string2);
    
    
    return 0;
} 