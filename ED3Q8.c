#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lim1 = 0, lim2 = 0, numero = 0, tamanho = 0, aux=0, correto=0;

    printf("\n digite os valores de cada ponta do intervalo:");
    scanf("%i %i", &lim1, &lim2);

    if (lim1>lim2)
     {
      aux=lim1;
      lim1=lim2;
      lim2=aux;
    }

    printf("\nnumero de vezes do processo:");
    scanf("%i", &tamanho);
    
    printf("\nDigite os numeros:");
    
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%i", &numero);

        if ((numero % 2 == 0 && numero % 3 != 0) && lim1 <= numero && numero <= lim2)
        {
            correto++;
             printf("\n%i esta dentro dos requisitos.\n", numero);
        }
        else if((numero % 2 == 0 && numero % 3 == 0) && lim1 <= numero && numero <= lim2){
            printf("\n%i esta no limite e divide pelos 2.\n", numero);
        } else if((numero % 2 != 0 && numero % 3 == 0) && lim1 <= numero && numero <= lim2){
            printf("\n%i esta no limite nao divide por 2 mas sim por 3.\n", numero);
        } else if((numero % 2 != 0 && numero % 3 != 0) && lim1 <= numero && numero <= lim2){
            printf("\n%i esta no limite mas nao divide por nenhum.\n", numero);
        }else {
            printf("\nnao esta no limite");
        }
        
    };

    printf("\n %i sao divisiveis por 2, mas nao sao por 3 e estao no intervalo", correto);
    return 0;
}
