#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int valor(int arranjo[], int posicao, int x) 
{
  int encontrado = 0;
  for (int i = (posicao - 1); i <= 50; i++) 
  {
    if (arranjo[i] == x) 
    {
      encontrado++;
    }
  }
  return encontrado;
}

int main()
{
  int n = 0,posi = 0,temp = 0,arr[100],resp = 0;
  FILE *arquivo = fopen("DADOS.txt", "r");
  printf("\nDigite um valor ");
  scanf("%i", &n);
  getchar();
  printf("\nDigite a posição ");
  scanf("%i", &posi);
  getchar();

  for (int i = 0; i <= 50; i++) 
  {
    fscanf(arquivo, "%i", &temp);
    arr[i] = temp;
  }

  resp = valor(arr, posi, n);

  if (resp > 0) {
    printf("\nO valor foi encontrado");
  } else {
    printf("\nO valor nao foi encontrado");
  }

  fclose(arquivo);
  getchar();
}