#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool iguais(int arr[], int arr2[], int tam1, int tam2) 
{
    bool resposta = true;
    int a = 0;
    if (tam1 == tam2) {
        while ((resposta) && (a < tam1)) 
        {
            if (arr[a] != arr2[a])
            {
                resposta = false;
            }
            a++;
        }
    } 
    else 
    {
    resposta = false;
    }
    return resposta;
}

int copiar(int array[], char *nome) 
{
    FILE *arquivo = fopen(nome, "r");
    int i = 0;
    int x = 0;
    fscanf(arquivo, "%i", &x);
    while (!feof(arquivo)) 
    {
        array[i] = x;
        fscanf(arquivo, "%i", &x);
        i++;
    }
    return i;
}

int main() 
{
    int array1[100],array2[100], tam1 = copiar(array1, "1.txt"), tam2 = copiar(array2, "2.txt");
    if (iguais(array1, array2, tam1, tam2)) 
    {
    printf("\nIDENTICOS");
    } 
    else 
    {
    printf("\nNAO sao iguais");
    }
    return 0;
}