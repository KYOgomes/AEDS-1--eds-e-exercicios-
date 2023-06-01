#include <Stdio.h>
#include <Stdlib.h>
#include <stdbool.h>

int main() {
  int colunas = 0;
  int linhas = 0;
  bool error;
  do 
  {
    printf("\nDigite a quantidade de linhas: ");
    scanf("%i", &linhas);
    error = linhas <= 0;
    if (error) {
      printf("Valor invalido, tente novamente");
    }
  } while (error);

  do 
  {
    printf("\nDigite a quantidade de colunas: ");
    scanf("%i", &colunas);
    error = colunas <= 0;
    if (error) {
      printf("Valor invalido, tente novamente");
    }
  } while (error);

  
  int matriz[linhas][colunas];

  if (linhas == colunas) 
  {
    for (int i = 0; i < linhas; i++) 
    {
      for (int j = 0; j < colunas; j++) 
      {
        printf("NUMEROS[%d][%d] =  ", i, j);
        scanf("%d", &matriz[i][j]);
      }
    }
    printf("\n");
    for(int i =0; i<linhas; i++)
    {
        for(int j=0; j<colunas; j++)
        {
            printf("%i ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nFazem parte da diagonal principal da matriz:\n");
    for (int i = 0; i < linhas; i++) 
    {
      for (int j = 0; j < colunas; j++) 
      {
        if (i == j) 
        {
          printf("\nNUMEROS[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
      }
    }
  } 
  else 
  {
    printf("\nmatriz nao exata");
  }
  return 0;
}