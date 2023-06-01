#include <math.h>
#include <stdio.h>
void soma(float x, float n) 
{
  FILE *arq = fopen("NUM.TXT", "wt");
  float z = 0, resp = 0, soma = 1;
  for (int i = 1; z < n; i++) {
    if (i % 2 != 0) 
    {
      resp = (1 / pow(x, i));
      soma = soma + resp;
      z++;
    }
  }
  fprintf(arq, "\n%f=soma",soma);
  fclose(arq);

}
int main() {
  float x = 0, n = 0;

  printf("\n___somar sequencia___");
  printf("\nquantidade de vezes:");
  scanf("\n %f", &n);
  printf("\nNumero da base:");
  scanf("\n %f", &x);
  soma(x, n);

  return 0;
}
