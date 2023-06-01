//AUTOR: Caio Gomes Alcântara Glória
//MATRICULA: 763989
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int num_pares_7(char string[]) {
  int resp = 0;
  int tamanho = 0;
  tamanho = strlen(string);
  for (int i = 0; tamanho > i; i++) {
    if ((string[i] >= 33) && (string[i] <= 126)) {
      if (string[i] % 2 == 0) {
        resp++;
      }
    }
  }
  return resp;
}

int main() 
{
    char palavra[100];
    int resultado;
    printf("\n___DIGITOS PARES___\nDigite a sequencia de caracteres:");
    scanf(" %s", palavra);
    getchar();
    printf("\n%i eh a quantidade de caracteres pares", num_pares_7(palavra));
    return 0;
}