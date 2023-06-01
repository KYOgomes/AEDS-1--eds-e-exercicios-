#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int impar( char *nome, int arr[]) 
{
  int i = 0;
  int x = 0;
  FILE *arquivo = fopen(nome, "r");
  do {
    fscanf(arquivo, "\n%i", &x);
    if (x % 2 != 0) {
      arr[i] = x;
      i++;
    }
  } while (!feof(arquivo));
  fclose(arquivo);
  return i;
}

int menorImpar(int arr[], int tam) 
{
  int menor = arr[0];
  for (int i = 1; i < tam; i++) 
  {
    if (menor > arr[i])
      menor = arr[i];
  }
  return menor;
}

int main() 
{
  int arr[1000];
  printf("\n___ Menor valor IMPAR___");
  
  printf("\n%i = menor valor impar",menorImpar(arr, impar(arr, "DADOS.txt")));
  return 0;
}