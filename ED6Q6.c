#include <stdio.h>
#include <stdlib.h>

float recu(int n) {
    float soma = 0;
   
    if (n != 0) 
    {   
        soma = ( 1/((2*n) +7)) + recu(n-1);
    } 
    
    return soma;
}

int main() {
    float valor = 0;
    printf("Somando valores impares a partir de 9: ");
    scanf("%f", &valor);
    getchar();
    printf("soma =  ");
    printf("%f", recu(valor));
    
  return 0;
} 


