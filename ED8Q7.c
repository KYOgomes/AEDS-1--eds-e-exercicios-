#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ordenar(double arranjo[], int qtde) 
{
  int ord = 0;
  for (int i = 0; i < qtde; i++) 
  {
    if (arranjo[i] > arranjo[i + 1]) 
    {
      ord++;
    }
  }
  return ord;
}
int main() 
{
    printf("\n___Crescente??___");
    int n = 0, x = 0, desordenado = 0;
    double arr[100];
  do 
  {
    printf("quantos no arranjo?: ");
    scanf("%i", &n);
    if (n < 2) 
    {
      printf("\n\aValor Invalido!, tente novamente \n");
    }
  }while (n < 2);
  for (int i = 0; i < n; i++) 
  {
    printf("Digite um valor: ");
    scanf("%d", &x);
    arr[i] = x;
  }
  if (n % 2 != 0) 
  {
    n--;
  }
  desordenado = ordenar(arr, n);
  if (desordenado > 0) 
  {
    printf("\nNAO esta em ordem");
  } 
  else 
  {
    printf("\nESTA em ordem");
  }
}