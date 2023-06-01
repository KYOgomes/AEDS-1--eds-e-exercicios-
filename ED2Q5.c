#include <stdio.h> 
#include <stdlib.h>

int resultado (int x){
   if ((x>=15 && x<=30) && (x>=25 && x<=40)){
    return 0;
  }
  else if (x>=15 && x<=30){
    return 1;
  }
  else if (x>=25 && x<=40){
    return 2;
  }
  else {
    return 3;
  }
}

int main (){
  int n;
  char n2;
  printf("Digite um numero:");
  scanf("%i",&n);
  n2=resultado(n);

  if (n2==0){
    printf("\n %i esta em ambos \n", n);
  }
  else if (n2==1) {
    printf("\n %i esta entre [15, 30]\n", n);
  }
  else if (n2==2){
    printf("\n %i esta entre [25, 40]\n", n);
  }
  else if (n2==3){
    printf("\n %i NAO pertence a nenhum\n", n);
  }

    return 0;
}
