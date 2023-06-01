#include <stdio.h>
#include <stdlib.h>

void recu( int n) 
{
  if (n!=0) 
  {
    printf("%i\n", (9*n));
    recu(n-1);
  }
}
int main(void) {
  int n=0;
  printf("Multiplos em ordem decrescente___\n");
  printf("\nDigite o numero:");
  scanf("%i",&n);
  recu(n);
  return 0;
}