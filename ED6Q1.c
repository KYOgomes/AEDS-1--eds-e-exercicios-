#include <stdio.h>
#include <stdlib.h>

void recu(int i, int n) {
  if (i < n) {
    printf("%i\n", (9 + (2 * i)));
    recu(++i, n);
  }
}
int main(void) {
  int i=0, n=0;
  printf("Impares em ordem crescente___\n");
  printf("\nDigite o numero de vezes:");
  scanf("%i",&n);
  recu(i, n);
  return 0;
}