#include <stdio.h>
void leva(int n)
{
  int x=0; 
  FILE *arq= fopen("NUMEROS.txt", "wt");
  for(int i=(2*n);7*i>=14;i--)
  {
    if(i%2==0){
      fprintf(arq,"\n %d",7*i);
      x--;
    }
  }
  fclose(arq);
}

int main(void) 
{
  int n=0;
  
  printf("\n___Multiplos de 7 pares___");
  printf("\nDigite a quantidade de numeros da sequencia:");
  scanf("%d",&n);
  leva(n);
  return 0;
}
