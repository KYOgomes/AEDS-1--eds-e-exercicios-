#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 0, x = 0, aux = 0;
  bool error;
  
  printf("\n___Guardar numeros arranjos___");
  printf("\ndigite a quantidade de numeros:");
  do 
  {
    scanf("%d", &n);
    error = n <= 0;
    if (error) {
      printf("\nArranjo sem valor!\n");
    }
  } while (error);
  
  int vet[n];

  for (int i = 0; i < n; i++) 
  {
    printf("Digite o valor %i:", i + 1);
    scanf("%d", &aux);
    if ((aux > 0) && (aux % 2 != 0))
    {
      vet[x]=aux;
      x++;
    }
    else 
    {
      printf("\nValor invalido\n!");
      i--;
    }
  }
  printf("\n[");
  for (int j = 0; j < x; j++)
    {
      printf("%d ",vet[j]);
    }
    printf("]");
  return 0;
}