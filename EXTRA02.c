//dificil esse em...
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float fat(float tamanho) {
  int resp = 1;
  for (int i = tamanho; i > 0; i--) {
    resp *= i;
  }
  return resp;
}

void recebo(int tamanho) {
  float resp=1;
  for(int i=2; i<=tamanho; i++)
    {
      float j = fat(i+1);
      resp *= 1 +(i/j);
    }
  printf("\n %f", resp);
}


int main(void) {
  printf("__Conta maluca n vezes__\n");
  int x = 0, tamanho = 0;
  printf("\n digite a quantidade de vezes:");
  scanf("%d", &tamanho);

  recebo(tamanho);

  return 0;
}