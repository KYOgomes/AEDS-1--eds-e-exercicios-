//AUTOR: Caio Gomes Alcântara Glória
//MATRICULA: 763989
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void contarmostrar(char string[]) 
{
    int alfa=0, naoalfa=0;
    int tamanho = strlen(string);
    for (int i = 0; tamanho > i; i++) 
    {
        if ((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z') || (string[i] >= '0' && string[i] <= '9'))
        {
            alfa++;
            printf("");
        } else  
            {
                naoalfa++;
            printf("");
            } 
    }
    printf("\n %i sao alfanumericos e %i sao NAO alfanumericos",alfa,naoalfa);
    
}

int main() {
  char palavra[100];
  printf("\nDeterminar se eh MAIUSCULA > 'J' \nDigite a sequencia de caracteres: ");
  scanf(" %s", palavra);
  getchar();

  contarmostrar(palavra);
    return 0;
} 