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

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o numero: \n");
        scanf("%i", &numero);

        if (numero % 5 == 0 && lim1 <= numero && numero <= lim2)
        {
            correto++;
             printf("%i esta dentro do limite e divide por 5.\n", numero);
        }
        else printf("\n.");
    };

    printf("\n %i sao divisiveis por 5 e estao no intervalo", correto);
    return 0;
}

