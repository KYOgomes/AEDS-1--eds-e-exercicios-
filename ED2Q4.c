#include <stdio.h> 
#include <stdlib.h>

int resultado (int x){
  if ((x>=25)&&(x<=40)){
    return 0;
  }
  else return 1;
}

int main (){
  int n;
  char n2;
  printf("Digite um numero:");
  scanf("%i",&n);
  n2=resultado(n);

  if (n2==0){
    printf("%i esta entre o intervalo fechado [25, 40]\n", n);
  }
  else if (n2==1) {
    printf("%i NAO esta entre o intervalo fechado [25, 40]\n", n);
  }

    return 0;
}
