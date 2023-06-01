#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void recebo(int tamanho) {
  int resp = 0;
  for (int i = 9; i < tamanho + 9; i++) {
    resp += (i * i);
  }
  printf("\n %i", resp);
}

int main(void) {
  printf("__SOMA dos quadrados dos primeiros números naturais começando no valor 9.__\n");
  int x = 0, tamanho = 0;
  printf("\n digite quantidade de vezes:");
  scanf("%d", &tamanho);

  recebo(tamanho);

  return 0;
}