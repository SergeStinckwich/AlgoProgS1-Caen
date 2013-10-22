#include <stdio.h>

int factorielle(int n){
	int i;
	int factorial = 1;
	for (i=1; i<=n; i++)
		factorial = factorial*i;
	return factorial;
}

int main(void){
  int x, resultat;
  
  printf("Entrer valeur de n?");
  scanf("%d", &x);

  resultat = factorielle(x);

  printf("Factorielle de %d est %d\n", x, resultat);

  printf("%d", factorielle(2));
  printf("%d", factorielle(3));

  return 0;
}
