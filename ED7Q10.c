#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contar()
{
  FILE *arq=fopen("receber.txt", "r");
  char string;
  int cont = 0;
  
  
  while((string = fgetc(arq))!=EOF)
    {
      if((string>='7')&&(string<='9'))
      {
        cont++;
      }
    }

  fclose(arq);
  return cont;
}

void escrever(int x)
{
  FILE *arq2 = fopen("escrever.txt", "w");
  fprintf(arq2,"\n%d digitos sao maioroes q 7!", x);
  fclose(arq2);
}


int main(void) {
  printf("\n___MAIUSCULAS___");

  escrever(contar());
  return 0;
}
