#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void divisores(int num)
{
  FILE *arq = fopen("arquivo.txt","w");
  for(int i=num;i>0;i--)
    {
      if(num%i==0)
      {
        fprintf(arq, "%d eh divisor\n", i);
      }
    }
  fclose(arq);
}

int main(void) {
  printf("\n___Divisores decrescente___");
  int num;
  printf("\nDigite um numero:");
  scanf("%d",&num);
  divisores(num);
  return 0;
}
