//AUTOR: Caio Gomes Alcântara Glória
//MATRICULA: 763989
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, b=0, aux=0, tamanho=0, numero=0, dentro=0, fora=0;
    printf("\n ___Saber se os numeros estao no intervalo___");
    printf("\ndigite o valor dos dois intervalos[x,y]:");
    scanf("%i %i", &a, &b);

    printf("\n Digite a quantidade de numeros a serem digitados:");
    scanf("%i", &tamanho);
    
    if (a>b)
    {
        aux=a;
        a=b;
        b=aux;
    }
    
    printf("\n digite os numeros:");
    
    for(int n; n<tamanho; n++)
    {
        scanf("%i\n",&numero);
    
        if(numero>=a && numero<=b)
        {
            dentro++;
        }else {
            fora++;
        }
    };

    printf("\n %i estao dentro do intervalo, e %i estao FORA do intervalo",dentro,fora);


    return 0;
}