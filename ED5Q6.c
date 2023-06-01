#include <stdio.h>
#include <stdlib.h>

int recebo(int i) { return 9 * (i + 1); }

int main(void) {
  printf("__Multiplos de 9 IMPARES e NAO divisiveis por 5__\n");
  int tamanho = 0, soma = 0, a = 0;
  printf("\n digite quantos multiplos de 9 voce deseja:");
  scanf("%d", &tamanho);
  int valores;

  for (int i = 0; a < tamanho; i++) {
    if ((recebo(i) % 2 != 0) && (recebo(i) % 5 != 0)) {
      valores = recebo(i);
      a++;
      soma += valores;
    }
  }
  printf("\t%d", soma);

  return 0;
}