#include <stdio.h>
void leva(int n)
{
   int num=1;
  FILE *arq= fopen("NUMEROS.txt", "wt");
  for(int i=0; i<n; i++)
  {
    fprintf(arq,"\n%d", num);
    num = num*3;
  }
  fclose(arq);
}

int main(void) 
{
  int n=0;
  
  printf("\n___Squencia *3___");
  printf("\nDigite a quantidade de numeros da sequencia:");
  scanf("%d",&n);
  leva(n);
  return 0;
}
