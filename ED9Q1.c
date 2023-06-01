#include <Stdio.h>
#include <Stdlib.h>
#include <stdbool.h>

int main()
{
    int linhas=0, colunas=0;
    bool error;

    printf("\n ___MATRIZ___");
    do
    {
        printf("\n digite a quantidade de linhas:");
        scanf("%d", &linhas);
        error=linhas<=0;
        if(error)
        {
            printf("\n\a Tente novamentet:");
        }
    }while(error);
    
    
    do
    {
        printf("\n digite a quantidade de colunas:");
        scanf("%d", &colunas);
        error=colunas<=0;
        if(error)
        {
            printf("\n\a Tente novamentet:");
        }
    }while(error);

    int matriz[linhas][colunas];

    for(int i=0; i < linhas; ++i)
    {
        for(int j=0; j<colunas; ++j)
        {
            printf("\nNUMEROS[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int i =0; i<linhas; ++i)
    {
        for(int j=0; j<colunas; ++j)
        {
            printf("%i ",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}