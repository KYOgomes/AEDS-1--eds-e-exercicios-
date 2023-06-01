#include <stdio.h>
#include <stdlib.h>
int main()
{
    char letra1, letra2, letra3;
    printf("Digite as letra 1, 2 e 3 (considere a letra 1 e 3 como  as que delimitam o intervalo):");
    scanf("%c %c %c",&letra1,&letra2,&letra3);
    int aux;
    if(letra1>letra3)
    {
        aux = letra1;
        letra1 = letra3;
        letra3= aux;
    }

    if((letra1<letra2)&&(letra2<letra3))
    {
        printf("\n letra %c esta entre %c e %c", letra2, letra1, letra3);
    }else if((letra1>letra2))
    {
        printf("\n letra %c esta entre %c e %c", letra1, letra2, letra3);
    }
    return 0;
}
