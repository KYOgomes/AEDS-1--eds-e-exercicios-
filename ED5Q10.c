#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void recebo(int tamanho) {
  float resp = 0;
  for (int i = 9; i < tamanho + 9; i++) {
    resp += (1.0 / i);
  }
  printf("\n %.3f", resp);
}

int main(void) {
  printf("__calcular a soma dos inversos começando em 9__\n");
  int x = 0, tamanho = 0;
  printf("\n digite quantidade de vezes:");
  scanf("%d", &tamanho);

  recebo(tamanho);

  return 0;
}