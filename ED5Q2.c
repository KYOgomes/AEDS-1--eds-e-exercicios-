#include <stdio.h>
#include <stdlib.h>

int recebo(int i)
{
  return 9*(i+1);
}

int main(void) {
  printf("__IMPARES multiplos de 9 e crescente__\n");
  int tamanho = 0;
  printf("\n digite quantos multiplos de 9 voce deseja:");
  scanf("%d", &tamanho);
  int valores[tamanho];

    int a = 0;
  
  for (int i = 0; a < tamanho; i++) 
  {
    if(!(recebo(i)%2==0)){
        valores[a] = recebo(i);
        a++;
    }
  }
  for (int j = 0; j < a; j++) 
  {
    printf("\t%d", valores[j]);
  }
  return 0;
}