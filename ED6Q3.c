#include <stdio.h>
#include <stdlib.h>

void recu( int n) 
{
  if (n!=0) 
  {
    recu(n-1);
    printf("%i\n", (9*n));
    
  }
}
int main(void) {
  int n=0;
  printf("Printar a sequencia___\n");
  printf("\nDigite o numero:");
  scanf("%i",&n);
  printf("\n1\n");
  recu(n-1);
  return 0;
}