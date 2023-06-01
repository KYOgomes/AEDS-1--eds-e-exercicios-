#include <stdio.h> 
#include <stdlib.h>

int resultado (int x, int y)
{
   if (y>x)
   {
    return 0;
   } else if (y==x)
     {
       return 1;
     } else if (y<x)
            {
                return 2;
            }
}

int main (){
  int n, m;
  char n2;
  printf("\n\n___Confirmar se o segundo e maior menou ou igual___");
  printf("\n Digite o primeiro numero:");
  scanf("%i",&n);
  printf("\n digite o segundo numero:");
  scanf("%i",&m);
  n2=resultado(n,m);

  if (n2==0){
    printf("\n %i e maior que %i \n", m, n);
  }
  else if (n2==1){
    printf("\n %i e igual %i \n", m, n);
  }else {
    printf("\n %i e menor que %i \n", m, n);
  }

    return 0;
}