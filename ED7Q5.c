#include <stdio.h>
#include <math.h>
int main()
{
  int x=0, n=0, z=0, resp=0;
  FILE *arq= fopen("NUM.TXT","wt");
  printf("\n___gravar sequencia___");
  printf("\nquantidade de vezes:");
  scanf("\n %d", &n);
  printf("\nNumero da base:");
  scanf("\n %d", &x);

  fprintf(arq, "1\n");
  for(int i=1;z<n;i++)
    {
      if(i%2!=0)
      {
        fprintf(arq, "1/%d\n",resp = pow(x,i));
        z++;
      }
      
    }
  fclose(arq);
  return 0;
}
