#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *arquivo = fopen("sla.txt", "w");
  int n = 0, x = 0, i = 0, aux = 0, arr[1000], p = 1;
  bool error, repeat = false;
  
  printf("\nDigite a quantidade: ");

  do 
  {
    scanf("%i", &n);
    error = n <=0;
    if(error)
    {
      printf("\n tente de novo:");
    }
  } while (error);
  aux = n;
  do 
  {
    repeat = false;
    printf("\nDigite o valor %d: ", p);
    p++;
    scanf("%i", &x);
    if ((x > 0) && !(x % 2 == 0)) {
      arr[i] = x;
      i++;
      aux--;
    } else {
      repeat = true;
    }
    if (repeat) {
      p--;
      printf("\nValor Invalido!");
    }
  } while (repeat || aux > 0);

  for (int i = 0; i < n; i++) 
  {
    fprintf(arquivo, "%i\n", arr[i]);
  }

  fclose(arquivo);
}