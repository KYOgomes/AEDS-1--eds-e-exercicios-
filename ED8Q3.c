#include <stdlib.h>
#include <stdio.h>
void gravar(int array[], int n) 
{
  FILE *arq = fopen("DADOS.txt", "w");
  for (int i = 0; i < n; i++) 
  {
    fprintf(arq, "%i\n", array[i]);
  }
  fclose(arq);
}

void valores(int a, int b, int n) 
{
  int array[100];
  int x = 0;
  for (int i = 0; i < n;) 
  {
    x = (rand() % b);
    if ((x >= a) && (x <= b)) 
    {
      array[i] = x;
      i++;
    }
  }
  gravar(array, n);
}

int main() 
{
  int lim1 = 0,lim2 = 0,qnt = 0;
  printf("\n___ALEATORIO___");
  printf("\nLimite inicial:");
  scanf("%i", &lim1);

  printf("\nDigite o limite final: ");
  scanf("%i", &lim2);

  printf("\nQual sera a quantidade? ");
  scanf("%i", &qnt);

  valores(lim1, lim2, qnt);
}