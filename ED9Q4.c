#include <stdio.h>
#include <stdbool.h>

/*int main()
{
    int matriz[2][2]={{1,2},
                      {3,4}};
    
    for(int i =0; i<2; ++i)
    {
        for(int j=0; j<2; ++j)
        {
            printf("%i ",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

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
        printf("\nDIAGONAL SECUNDADRIA DA MATRIZ:");
        for (int i = 0, j = (coluna - 1); i < linha; i++, j--) 
        {
            printf("\nNUMEROS[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }    
    else 
    {
        printf("\n\a Colunas e linhas NAO IGUAIS!");
    }

    return 0;
}
/* MOSTRAR AO CONTRARIO--->
for (int i = linha; i >= 0; i--) 
        {
            for (int j = coluna; j >=0; j--) 
            {
                if (i == j) 
                {
                    printf("\nElemento[%d][%d] = %d\n", i, j, matriz[i][j]);
                }
            }
        }
    }*/