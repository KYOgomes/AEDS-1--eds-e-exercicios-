//AUTOR: Caio Gomes Alcântara Glória
//MATRICULA: 763989
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void contarmostrar(char string[]) 
{
    int cabo;
    int tamanho = strlen(string);
    for (int i = 0; tamanho > i; i++) 
    {
        if ((string[i] >= 'J') && (string[i] <= 'Z'))
        {
            printf("\n%c eh MAIUSCULO > 'J'", string[i]);
        } else if((string[i]>='j' && string[i]<='z')) 
            {
            printf("\n%c eh minusculo > 'j'", string[i]);
            } else 
                {
                    printf("\n%c descartado", string[i]);
                }
    }
    return cabo;
}

int main() {
  char palavra[100];
  printf("\nDeterminar se eh MAIUSCULA > 'J' \nDigite a sequencia de caracteres: ");
  scanf(" %s", palavra);
  getchar();

  contarmostrar(palavra);
    return 0;
} 