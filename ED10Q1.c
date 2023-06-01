#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void gravar(int arr[], int n) 
{
    FILE *arquivo = fopen("DADOS.txt", "w");
    fprintf(arquivo, " \n%i", n);
    for (int i = 0; i < n; i++) 
    {
        fprintf(arquivo, "\n %i", arr[i]);
    }
    fclose(arquivo);
}
void random(int lim1, int lim2, int n) 
{
    int arr[100], x = 0;
    for (int i = 0; i < n;) 
    {
        x = (rand() % lim2);
        if ((x >= lim1) && (x <= lim2)) 
        {
            arr[i] = x;
            i++;
        }
    }
    gravar(arr, n);
}
int main()
{
    int lim1 = 0, lim2 = 0, num = 0;
    printf("Prmeiro limite: ");
    scanf("%i", &lim1);

    printf("\nLimite final: ");
    scanf("%i", &lim2);

    printf("\nquantidade de numeros: ");
    scanf("%i", &num);
    random(lim1, lim2, num);
    return 0;
}

