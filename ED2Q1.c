#include <stdlib.h>
#include <stdio.h>

int conta(int x)
{
    if(x%2==0)
    {
        return 0;
    }else return 1;
    
}
 
int main()
{
    int num1; 
    char result;
 
    printf("Numero par ou impar: ");
    scanf("%d", &num1);
 
    result = conta(num1);

    if(result==0){
        printf("\n PAR");
    }else printf("\n IMPAR ");
 
}


