#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void recebo(int tamanho) {
  int resp = 0;
  int x = 9;
  for (int i = 0; i < tamanho; i++) {
    resp += (9 + i);
  }
  printf("\n %i", resp);
}

int main(void) {
  printf("__SOMA dos valores de multiplos de 9 no denominador__\n");
  int x = 0, tamanho = 0;
  printf("\n digite quantidade de vezes:");
  scanf("%d", &tamanho);

  recebo(tamanho);

  return 0;
}