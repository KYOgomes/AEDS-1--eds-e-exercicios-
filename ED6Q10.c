#include <stdio.h>
#include <stdlib.h>

int recu_10(int numero) {
  int soma = 1;
  if (numero > 2) {
    soma = recu_10(numero - 1) + recu_10(numero - 2);
  }
  return soma;
}

int main(void) {
  int num = 0;
  printf("digite a quantidade: ");
  scanf("%i", &num);
  getchar();
  printf("%i", recu_10(num));
  
  return 0;
}