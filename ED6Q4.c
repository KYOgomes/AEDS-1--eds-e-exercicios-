#include <stdio.h>
#include <stdlib.h>

void recu(int n) {
  if (n > 0) {
    printf("1/%.0f\t ", pow(9, n));
    recu(n - 1);
  }
}

int main(void) {
  int n=0;
  printf("1/elevado a 9 na ordem decrescente___\n");
  printf("\nDigite o numero de vezes:");
  scanf("%i",&n);
  recu(n);
  printf(" 1");
  return 0;
} 