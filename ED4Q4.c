//AUTOR: Caio Gomes Alcântara Glória
//MATRICULA: 763989
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void contarmostrar(char string[]) 
{
  int resp = 0;
  int tamanho = strlen(string);
  for (int i = 0; tamanho > i; i++) 
  {
    if ((string[i] >= 'J') && (string[i] <= 'Z')) {
      printf("\n\n%c eh maiusculo > 'J'\n", string[i]);
      resp++;
    }
  }
  printf("\n %i estao nos requisitos ", resp);
}

int main() {
  char palavra[100];
  printf("\nDeterminar se eh MAIUSCULA > 'J' \nDigite a sequencia de caracteres: ");
  scanf(" %s", palavra);
  getchar();

  contarmostrar(palavra);
  getchar();
  return 0;
} 


