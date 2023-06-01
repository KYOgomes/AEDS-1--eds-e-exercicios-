//AUTOR: Caio Gomes Alcântara Glória
//MATRICULA: 763989
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void contarmostrarmaiu(char string[]) 
{
    int cabo;
    int tamanho = strlen(string);
    for (int i = 0; tamanho > i; i++) 
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            printf("\n%c EH maiuscula", string[i]);
        } else  
            {
            printf("");
            } 
    }
    return cabo;
}
void contarmostrarminu(char string[]) 
{
    int cabo;
    int tamanho = strlen(string);
    for (int i = 0; tamanho > i; i++) 
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            printf("\n%c EH minuscula", string[i]);
        } else  
            {
            printf("");
            } 
    }
    return cabo;
}
void contarmostrarnum(char string[]) 
{
    int cabo;
    int tamanho = strlen(string);
    for (int i = 0; tamanho > i; i++) 
    {
        if (string[i] >= '0' && string[i] <= '9')
        {
            printf("\n%c EH numeral", string[i]);
        } else  
            {
            printf("");
            } 
    }
    return cabo;
}

int main() {
  char palavra[100];
  printf("\nDeterminar se eh MAIUSCULA > 'J' \nDigite a sequencia de caracteres: ");
  scanf(" %s", palavra);
  getchar();

  contarmostrarmaiu(palavra);
  printf("\n---------------------");
  contarmostrarminu(palavra);
  printf("\n---------------------");
  contarmostrarnum(palavra);
  printf("\n---------------------");
    return 0;
} 