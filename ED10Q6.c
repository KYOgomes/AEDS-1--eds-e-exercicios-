#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void levar(int lin, int col, int matriz[lin][col])
{
    int tam = lin * col;
    int array_aux[tam];
    int matriz2[col][lin];
    printf("\nA matriz original eh:");
    for (int i = 0; i < lin; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            printf("\nElemento[%d][%d] = %d\n", i, j, matriz[i][j]);
            matriz2[j][i] = matriz[i][j];
        }
    }
    printf("\nA matriz transposta eh:");
    for (int c = 0; c < col; c++) 
    {
        for (int l = 0; l < lin; l++) 
        {
            printf("\nElemento[%d][%d] = %d\n", l, c, matriz2[c][l]);
        }
    }
}

void ler(char *nome) 
{
    int lin = 0, col = 0;
    FILE *arquivo = fopen(nome, "r");
    fscanf(arquivo, "%i", &lin);
    fscanf(arquivo, "%i", &col);
    int matriz[lin][col];
    for (int i = 0; i < lin; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            fscanf(arquivo, "%d", &matriz[i][j]);
        }
    }
    fclose(arquivo);
    levar(lin, col, matriz);
}

int main() 
{
    ler("abc.txt");
    return 0;
}