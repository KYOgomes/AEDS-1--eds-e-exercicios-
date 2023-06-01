#include <stdio.h>
void fibo(int n) {
  FILE *arq=fopen("RESULTADO08.TXT", "wt");
  int a, b, auxiliar, i;
  a = 0;
  b = 1;

  for (i = 0; i < n; i++) {

    auxiliar = a + b;
    a = b;
    b = auxiliar;

    fprintf(arq,"%d\n", auxiliar);
  }
  fclose(arq);
}

int main(void) {
  int n = 0;
  printf("\n ___FIBONACCI___");
  printf("\nDigite a quantidade:");
  scanf("\n%d", &n);
  fibo(n);
  return 0;
}