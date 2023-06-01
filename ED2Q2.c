/*#include <stdio.h> 
#include <stdlib.h>


int main()
{
    int num;
    printf("\n digite um numero:");
    scanf("%i", &num);

    if((num%2==0)&&(num<=-30))
    {
        printf("\n Menor que -30 e par");
    }else if((num%2!=0)&&(num>=30))
            {
                printf("\n %i maior que 30 e impar", num);
            }
    return 0;
}*/

/*#include<stdio.h>

int conta (int x){
    if (x%2==0 && x<=(-30))
    {
        return 0;
    }
  else if (x%2!=0 && x>=30)
    {
        return 1;
    }
  
}

int main (void){
    float num;
    char num2;
    printf("Fala um numero ai!\n");
    scanf("%f",&num);
    num2=conta(num);

    if (num2==0)
    {
        printf("Esse numero e par e menor que -30!\n");
    }else if (num2==1) 
            {
                printf("Esse numero e impar e maior que 30!\n");
            }
    return 0;
}*/

#include <stdio.h> 
#include <stdlib.h>

int resultado (int x){
  if ((x%2==0) && (x<=-30)){
    return 0;
  }
  else if ((x%2!=0) && (x>=30)){
    return 1;
    }
  else 
    return 2;
}

int main (){
  int n;
  char n2;
  printf("Digite um numero!\n");
  scanf("%i",&n);
  n2=resultado(n);

  if (n2==0){
    printf("%i par e menor que -30\n", n);
  }
  else if (n2==1) {
    printf("%i impar e maior que 30\n", n);
  }
  else {
    printf("%i nao se enquadra\n", n); 
    }
return 0;
}

