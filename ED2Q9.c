#include <stdio.h> 
#include <stdlib.h>

int resultado (int x, int y, int z)
{   
    int aux=0;
    if (z<y){
        int aux = y;     
        y = z; 
        z = aux;
    }
    
   if ((x!=y&&x!=z)&&y<=x<=z)
   {
    return 0;
   } else 
     {
       return 1;
     } 
}

int main (){
  int a, b, c
  ;
  char n2;
  printf("\n\n___esta entre___");
  printf("\n Digite o primeiro numero:");
  scanf("%i",&a);
  printf("\n digite o segundo numero:");
  scanf("%i",&b);
  printf("\n digite o segundo numero:");
  scanf("%i",&c);
  n2=resultado(a,b,c);

  if (n2==0){
    printf("\n %i esta entre %i e %i \n", a, b, c);
  }
  else {
    printf("\n %i nao esta entre os valores  %i e %i \n", a, b, c);
  }

    return 0;
}