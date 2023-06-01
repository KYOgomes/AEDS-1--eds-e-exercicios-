#include <stdio.h>
#include <stdlib.h>

int recu(int n) {
    int soma = 0;
   
    if (n != 0) 
    {   
        soma = ( (2*n) +7) + recu(n-1);
    } 
    
    return soma;
}

int main() {
    int valor = 0;
    printf("Somando valores impares a partir de 9: ");
    scanf("%i", &valor);
    getchar();
    printf("soma =  ");
    printf("%i", recu(valor));
    
  return 0;
} 

