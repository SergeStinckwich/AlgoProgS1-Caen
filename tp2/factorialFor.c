#include <stdio.h>

int main(void)

{
  int factorial;
  int n, i;
  
  printf("Entrer valeur de n?");
  scanf("%d", &n);
  factorial = 1;
  for (i=1; i<=n; i++)
    factorial = factorial*i;
  printf("Factorielle de %d est %d\n", n, factorial);
}
