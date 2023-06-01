#include <stdio.h>
void leva(int n)
{
  int x=0; 
  FILE *arq= fopen("NUMEROS.txt", "wt");
  for(int i=0; x<n; i++)
  {
    if(i%2!=0){
      fprintf(arq,"\n %d",5*i);
      x++;
    }
  }
  fclose(arq);
}

int main(void) 
{
  int n=0;
  
  printf("\n___Guardar Multiplos de 5___");
  printf("\nDigite a quantidade de numeros da sequencia:");
  scanf("%d",&n);
  leva(n);
  return 0;
}
