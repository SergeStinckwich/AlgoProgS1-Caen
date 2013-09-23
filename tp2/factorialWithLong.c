#include <stdio.h>

int main(void)

{
  long factorial;
  int n, i;
  
  printf("Entrer valeur de n?");
  scanf("%d", &n);
  factorial = 1;
  for (i=1; i<=n; i++)
    factorial = factorial* (long)i;
  printf("Factorielle de %d est %ld\n", n, factorial);
}
