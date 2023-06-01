#include <stdio.h>
#include <stdlib.h>

int recebo(int i) { return 9 * (i + 1); }

int main(void) {
  printf("__Multiplos de 9 IMPARES e NAO divisiveis por 5 no DENOMINADOR__\n");
  int tamanho = 0, a = 0;
  printf("\n digite quantos multiplos de 9 voce deseja:");
  scanf("%d", &tamanho);
  int valores;
  float fracao, soma = 0;

  for (int i = 0; a < tamanho; i++) {

    if ((recebo(i) % 2 != 0) && (recebo(i) % 5 != 0) && (recebo(i) % 9 == 0)) {
      valores = recebo(i);
      fracao = 1.0 / valores;
      a++;
      soma += fracao;
    }
  }
  printf("\t %.3f", soma);

  return 0;
}