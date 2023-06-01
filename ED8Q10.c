#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fff(int arr[], int posicao, int x) {
  int encontrado = 0;
  for (int i = (posicao - 1); i <= 50; i++) {
    if (arr[i] == x) {
      encontrado++;
    }
  }
  return encontrado;
}

int main() 
{
  int n = 0, posi = 0, temp = 0, arr[100];
  int resp = 0;
  FILE *arquivo = fopen("DADOS.txt", "r");
  printf("\nvalor interio?:");
  scanf("%i", &n);
  printf("\nDigite a posição:? ");
  scanf("%i", &posi);

  for (int i = 0; i <= 50; i++) 
  {
    fscanf(arquivo, "%i", &temp);
    arr[i] = temp;
  }

  resp = fff(arr, posi, n);

  if (resp > 0) 
  {
    printf("\nvalor presente %i vezes", resp);
  } 
  else 
  {
    printf("\nnot found");
  }

  fclose(arquivo);
  return 0;
}