#include <stdio.h>

int main(void){
  int factorial;
  int n, i;
  
  printf("Entrer valeur de n?");
  scanf("%d", &n);
  factorial = 1;
  i = 1;
  do {
    factorial = factorial*i;
    i = i+1;
   } while (i<=n);

  printf("Factorielle de %d est %d\n", n, factorial);

  return 0;
}