#include <stdio.h>
#include <math.h>
void leva(int n)
{
  int a=0;
  FILE *arq= fopen("NUMEROS.txt", "wt");
 
  for(int i=n -1 ; i > 0; i--)
  {
    a = pow(4,i);
    fprintf(arq,"\n1/%i",a);
  } 
  fprintf(arq,"\n1");
  fclose(arq);
}

int main(void) 
{
  int n=0;
  
  printf("\n___Guardar sequencia decrescente___");
  printf("\nDigite a quantidade de numeros da sequencia:");
  scanf("%d",&n);
  leva(n);
  return 0;
}
