#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  float a,b;
  int n,aux,quantidade=0;

  printf("Informe dois valores:\n");
  scanf("%f %f", &a,&b);

  if (a>b){
    aux=a;
    a=b;
    b=aux;
  }

  printf("\nInforme a quantidade de numeros que vai digitar:\n");
  scanf("%i", &n);

  float numeros[n], numeros3[n];
  int numeros2[n];

  printf("\nInforme os numeros:\n");

  for (int i=0; i<n; i++){
    scanf("%f", &numeros[i]);
  }

  for (int i=0; i<n; i++){
    

    numeros2[n]=(int)numeros[n];
    numeros3[i]=numeros[n]-numeros2[n];
    
    if(numeros3[i]<a && numeros3[i]>b){
    quantidade++;
    printf(" A parte fracionaria do numero %.2f esta fora do intervalo %.2f e %.2f\n", numeros[i],a,b);
      }
  }
  printf("%d numeros possuem a parte fracionaria fora do intervalo %.2f e  %.2f\n",quantidade,a,b);

return 0;
}