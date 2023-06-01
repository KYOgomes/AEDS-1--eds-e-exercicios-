#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool crescente(int arr[], int n) 
{
    bool resposta = true;
    int i = 0;
    while ((resposta) && (i < n)) 
    {
        if (arr[i] < arr[i + 1]) 
        {
            resposta = false;
        }
        i++;
    }
  return resposta;
}

int copiar(int arr[], char *nome) 
{
    int i = 0, x = 0;
    FILE *arquivo = fopen(nome, "r");
    while (!feof(arquivo)) 
    {
        arr[i] = x;
        fscanf(arquivo, "%i", &x);
        i++;
    }
    fclose(arquivo);
    return i;
}

int main() 
{
    int arr[1000], n = copiar(arr, "adfhadfh.txt");
    if (crescente(arr, n)) 
    {
        printf("\nesta na ordem CRSCENTE");
    }  
    else  
    {
    printf("\nNAO esta na ordem");
    }
}