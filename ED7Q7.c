#include <stdio.h>
#include <math.h>

void leva(int n)
{
  float a=0;
  float soma=0;
  FILE *arq= fopen("NUMEROS.txt", "wt");
 
  for(int i=n -1 ; i > 0; i--)
  {
    a = pow(4,i);
    soma = soma + sqrt(a);
  } 
  fprintf(arq, "\n%.2f",soma);
  fclose(arq);
}

int main(void) 
{
  int n=0;
  
  printf("\n___Soma dos inversos das potencias___");
  printf("\nDigite a quantidade de numeros da sequencia:");
  scanf("%d",&n);
  leva(n);
  return 0;
}
