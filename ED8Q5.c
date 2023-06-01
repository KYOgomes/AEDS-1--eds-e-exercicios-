#include <stdio.h>
#include <string.h>
int par(char *nome, int arranjo[]) 
{
  int i = 0;
  int x = 0;
  FILE *arquivo = fopen(nome, "r");
  do 
  {
    fscanf(arquivo, "%i", &x);
    if (x % 2 == 0) 
    {
      arranjo[i] = x;
      i++;
    }
  } while (!feof(arquivo));
  fclose(arquivo);
  return i;
  }

int maiorpar(int array[], int tam) 
{
  int menor = array[0];
  for (int i = 1; i < tam; i++) 
  {
    if (menor < array[i]){
       menor = array[i];
    }
  }
  return menor;
  }

int main() 
{
  int arr[1000];
  printf("\n___maior par___");
  printf("\nmaior par = %d", maiorpar(arr, par(arr, "DADOS.txt")));
  return 0;
}