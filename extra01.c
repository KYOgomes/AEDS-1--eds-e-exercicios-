#include <Stdio.h>
#include <Stdlib.h>
#include <stdbool.h>

int main()
{
    int n=0, x=1,l=2,c=2;
    bool error;

    printf("\n ___MATRIZ___");
    do
    {
        printf("\n digite a quantidade de vezes:");
        scanf("%d", &n);
        error=n<0;
        if(error)
        {
            printf("\n\a Tente novamentet:");
        }
    }while(error);

    int matriz[2][2]={x,++x,++x,++x};

    for(int i=0; i<n;i++)
    {
        int p=1;
        int matriz[2+(p++)][2+(p++)]={x,++x,++x,++x};

        printf("\n");
        for(int i =0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                printf("%i ",matriz[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}