#include <Stdio.h>
#include <Stdlib.h>
#include <stdbool.h>

void func(int lin, int col, int matriz[lin][col], char *nome) {
    FILE *arq = fopen(nome, "w");
   
    for(int i =0; i<lin; ++i)
    {
        for(int j=0; j<col; ++j)
        {
            fprintf(arq,"%i, ",matriz[i][j]);
        }
        fprintf(arq,"\n");
    }
    fclose(arq);
}

int main() 
{
    int colunas = 0, linhas = 0;
    bool error;
    do {
        printf("\nDigite a quantidade de colunas: ");
        scanf("%i", &colunas);
        error = colunas<=0;
        if (error) {
            printf("Valor invalido, tente novamente");
        }
    } while (error);

    do 
    {
        printf("\nDigite a quantidade de linhas: ");
        scanf("%i", &linhas);
        error = linhas<=0;
        if (error) 
        {
            printf("Valor invalido, tente novamente");
        }
    } while (error);

    int matriz[linhas][colunas];

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) 
        {
            printf("\nNUMEROS[%d],[%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    func(linhas, colunas, matriz, "a.txt");
    return 0;
}