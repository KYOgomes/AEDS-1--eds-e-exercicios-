#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
    }    
    else 
    {
        printf("\n\a Colunas e linhas NAO IGUAIS!");
    }
    
    printf("\n muito complexo, mesmo tendo prestado atencao nas aulas nao tenho ideia de como fazer este e como vc nao vai voltar para ensinar... vc bem q podia corrigir os exercicios em sala em professor, so ficar mostrando exemplo sentado na cadeira nao ta ajudando quase ninguem, sendo sincero aqui pois tem um amigo meu que quer desistir do curso devido ao fator de como vc da sua aula");
    return 0;
}