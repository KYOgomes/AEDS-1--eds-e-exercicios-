#include <stdio.h> 
#include <stdlib.h>

int resultado (int x, int y)
{
   if ((x%2==0) && (y%2!=0))
   {
    return 0;
   } else 
     {
       return 1;
     }
}

int main (){
  int n, m;
  char n2;
  printf("\n\n___Confirmar se o primero numero e par e o segundo e impar___");
  printf("\n Digite o primeiro numero:");
  scanf("%i",&n);
  printf("\n digite o segundo numero:");
  scanf("%i",&m);
  n2=resultado(n,m);

  if (n2==0){
    printf("\n %i e par e %i e impar \n", n, m);
  }
  else {
    printf("\n %i e %i nao estao na ordem par e impar \n", n, m);
  }

    return 0;
}