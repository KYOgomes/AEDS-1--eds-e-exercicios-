#include <stdio.h> 
#include <stdlib.h>

int resultado (int x, int y){
   if (((x%2!=0) && (x<0)) && ((y%2==0) && (y>0))){
    return 0;
  }
  else if (((x%2!=0) && (x>0)) && ((y%2==0) && (y<0))){
    return 1;
  }
  else if (((x%2==0) && (x<0)) && ((y%2!=0) && (y>0))){
    return 2;
  }
  else if (((x%2==0) && (x>0)) && ((y%2!=0) && (y<0))){
    return 3;
  }
  else if (((x%2==0) && (x>0)) && ((y%2!=0) && (y>0))){
    return 4;
  }

}

int main (){
  int n, m;
  char n2;
  printf("\n\n___Confirmar___");
  printf("\n Digite o primeiro numero:");
  scanf("%i",&n);
  printf("\n digite o segundo numero:");
  scanf("%i",&m);
  n2=resultado(n,m);

  if (n2==0){
    printf("\n %i e impar e negativo  %i e par e positivo \n", n, m);
  }
  else if(n2==1){
    printf("\n %i e impar e positivo %i e par e negativo \n", n, m);
  } 
  else if(n2 ==2) {
    printf("\n %i e par e negativo %i e impar e positivo \n", n, m);
  }
  else if(n2==3) {
    printf("\n %i e par e positivo %i e impar e negativo \n", n, m);
  }
  else if(n2==4) {
    printf("\n %i e par e positivo %i e impar e positivo \n", n, m);
  }

    return 0;
}
