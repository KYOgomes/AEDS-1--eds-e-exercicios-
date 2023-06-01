#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int acharValor09(int arranjo[], int posicao, int x) {
  int encontrado = 0;
  int lugar = 0;
  for (int i = (posicao - 1); i <= 50; i++) {
    if (arranjo[i] == x) {
      encontrado = i;
    }
  }
  return encontrado;
} // fim acharValor09 ( )

int main() {
  int n = 0, posi = 0, temp = 0, array[100], res_pesq = 0;
  FILE *arquivo = fopen("DADOS.txt", "r");
  printf("\nQual valor inteiro voce deseja buscar? ");
  scanf("%i", &n);
  printf("\nA partir de qual posicao deseja buscar? ");
  scanf("%i", &posi);

  for (int i = 0; i <= 50; i++) {
    fscanf(arquivo, "%i", &temp);
    array[i] = temp;
  }

  res_pesq = acharValor09(array, posi, n);

  if (res_pesq > 0) {
    printf("\nO valor foi encontrado na posicao %i", res_pesq);
  } else {
    printf("\nO valor nao foi encontrado");
  }

  fclose(arquivo);
}