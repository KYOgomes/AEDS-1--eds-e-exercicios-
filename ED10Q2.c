#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool tem02(int array[], int numero, int tam) {
    bool has = false;
    int i = 0;
    while (!has && i < tam) 
    {
        int n = 0;
        while (n < tam && !has) {
        if (array[n] == numero) 
        {
            has = true;
            printf("O valor %i esta na posicao %i", numero, n + 1);
            n = tam;
        }
        n++;
    }
    i++;
  }
  return has;
}

void ler(int n, char *nome) 
{
    int tamanho = 0;
    FILE *arquivo = fopen(nome, "r");
    fscanf(arquivo, "%i", &tamanho);
    int numeros[tamanho];
    for (int i = 0; i < tamanho; i++) 
    {
        fscanf(arquivo, "%i", &numeros[i]);
    }

    fclose(arquivo);

    if (!tem02(numeros, n, tamanho)) 
    {
        printf("not found");
    }
}

int main()
{
    printf("\n__PROCURAR__");
    int num = 0;
    printf("digite um numero:");
    scanf("%i", &num);
    
    ler(num, "aaa.txt");


    return 0;
}