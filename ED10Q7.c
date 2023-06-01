#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void ler(char *nome) 
{
    int lin = 0, col = 0;
    FILE *arquivo = fopen(nome, "r");
    fscanf(arquivo, "%i", &lin);
    fscanf(arquivo, "%i", &col);
    int matriz[lin][col];
    for (int i = 0; i < lin; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            fscanf(arquivo, "%d", &matriz[i][j]);
        }
    }
    fclose(arquivo);
    if (zero(lin, col, matriz)) 
    {
        printf("\ndiversos elementos");
    } 
    else 
    {
    printf("\nAPENAS '0'");
    }
}

bool zero(int lin, int col, int matriz[lin][col]) {
  int resposta = true;
  int l = 0, c = 0;
  while ((resposta) && (l < lin) && (c < lin)) {
    if (matriz[l][c] == 0) {
      resposta = false;
    }
    c++;
    l++;
  }
  return resposta;
}



int main()
{
  ler("quitopy.txt");
  return 0;
}