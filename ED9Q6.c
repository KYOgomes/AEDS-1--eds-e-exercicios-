#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("\n ___ DIAGONAL SECUNDARIA ___");
    int linha=0, coluna=0;
    bool error;
    do
    {
        printf("\nDigite o numero de linhas:");
        scanf("%d", &linha);
        error=linha<=0;
        if(error)
        {
            printf("\VALOR INVALIDO TENTE NOVAMENTE!:");
        }
    }while(error);

    do
    {
        printf("\nDigite o numero de colunas:");
        scanf("%d", &coluna);
        error=coluna<=0;
        if(error)
        {
            printf("\VALOR INVALIDO TENTE NOVAMENTE!:");
        }
    }while(error);

    int matriz[linha][coluna];

    if(linha==coluna)
    {
        for(int i=0; i< linha; i++)
        {
            for(int j=0; j<coluna; j++)
            {
                printf("\nNUMEROS[%d][%d]:",i,j);
                scanf("%d", &matriz[i][j]);
            }
        }
        for(int i=0; i< linha; i++)
        {
            for(int j=0; j<coluna; j++)
            {
                printf("%i ",matriz[i][j]);
            }
            printf("\n");
        }
        for (int i = 0; i < linha; i++) 
        {
            for (int j = 0; j < coluna; j++) 
            {
                if (i <= j) 
                {
                    printf("\nNUMERO[%d][%d] = %d-->", i, j, matriz[i][j]);
                    if (i == j) 
                    {
                        printf(" diagonal principal");
                    } 
                    else 
                    {
                        printf(" valor de cima");
                    }
                }
            }
        }
    }    
    else 
    {
        printf("\n\a Colunas e linhas NAO IGUAIS!");
    }

    return 0;
}