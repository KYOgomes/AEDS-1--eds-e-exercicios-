#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int medias(int arranjo[]) {
  int media = 0;
  int soma = 0;

  for (int i = 0; i <= 50; i++) {
    soma += arranjo[i];
  }
  media = soma / 50.0;
  return media;
}

void divisao(int arranjo[], int media) {
  FILE *arquivo1 = fopen("maior.txt", "w");
  FILE *arquivo2 = fopen("menor.txt", "w");
  fprintf(arquivo1, "ACIMA DA MEDIA \nMEDIA = %i", media);
  fprintf(arquivo2, "\nABAIXOS DA MEDIA\nMEDIA = %i", media);
  for (int i = 0; i < 50; i++) {
    if (arranjo[i] >= media) {
      fprintf(arquivo1, "%i\n", arranjo[i]);
    } else {
      fprintf(arquivo2, "%i\n", arranjo[i]);
    }
  }
  fclose(arquivo1);
  fclose(arquivo2);
}

int main() {
  int array[50];
  int x;
  int soma = 0;
  int media = 0;
  printf("\n ___MEDIA DOS VALORES___");
  FILE *arq = fopen("DADOS.txt", "r");
  
  for (int i = 0; i <= 50; i++) {
    fscanf(arq, "%i", &x);
    array[i] = x;
  }
  media = medias(array);
  divisao(array, media);
  fclose(arq);
  return 0;
}