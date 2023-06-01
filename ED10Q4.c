#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void somar(int arr[], int arr2[], int tam1, int tam2) 
{
    if (tam1 == tam2) 
    {
        printf("\n[");
        for (int i = 0; i < tam1; i++) 
        {
            printf(" %i ", (arr[i] + 2 * arr2[i]));
        }
        printf(" ]");
    } 
    else 
    {
    printf("\nOs tamanhos dos arranjos sao diferentes.");
    }
}

int copiar(int arr[], char *nome) 
{
    FILE *arq = fopen(nome, "r");
    int i = 0, x = 0;
    fscanf(arq, "%i", &x);
    while (!feof(arq)) 
    {
        arr[i] = x;
        fscanf(arq, "%i", &x);
        i++;
    }
    fclose(arq);
    return i;
}

int main()
{
    int arr[1000], arr2[1000], tam1 = copiar(arr, "1.txt"), tam2 = copiar(arr2, "2.txt");
    somar(arr, arr2, tam1, tam2);
    return 0;
}