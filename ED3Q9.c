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

  float numeros[n];
  int numeros2[n];

  printf("\nInforme os numeros:\n");

  for (int i=0; i<n; i++){
    scanf("%f", &numeros[i]);
  }

  for (int i=0; i<n; i++){
    
    numeros2[i]=(int)numeros[i];
    
    if(numeros2[i]%2==0 && (numeros[i]>=a && numeros[i]<=b)){
    quantidade++;
    printf("%.2f é divisível por 2 e esta entre %.2f e %.2f\n", numeros[i],a,b);
      }
  }
  printf("%i numeros são divisíveis por 2 e estão entre %.2f e   %.2f\n",quantidade,a,b);

return 0;
}