#include <stdio.h>
#include <stdlib.h>

int recebo(int i)
{
  return 9*(i+1);
}

int main(void) {
  printf("__Multiplos de 9 ordem crescente__\n");
  int tamanho = 0;
  printf("\n digite quantos multiplos de 9 voce deseja:");
  scanf("%d", &tamanho);
  int valores[tamanho];

  
  for (int i = 0; i < tamanho; i++) {
    valores[i] = recebo(i);
  }
  for (int j = 0; j < tamanho; j++) {
    printf("\t%d", valores[j]);
  }
  return 0;
}