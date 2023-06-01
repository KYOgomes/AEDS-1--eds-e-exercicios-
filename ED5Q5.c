#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void recebo(int x, int tamanho)
{
  printf("\t 1");
  for(int i=1; i<tamanho; i++)
  {
    printf("\t1/%.0f", pow(x,i));
  }
}

int main(void) {
  printf("__Multiplos de 9 no denominador com POTENCIA++__\n");
  int x = 0, tamanho=0;
  printf("\n digite qual o valor de x [1/x]:");
  scanf("%d", &x);
  printf("\n digite quantidade de vezes:");
  scanf("%d", &tamanho);
  
  recebo(x, tamanho);
  
  return 0;
}