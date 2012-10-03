#include <stdio.h>

int main(void)

{
	int numberOfCharacter;
	printf("Entrer nombre de caractères ?");
	scanf("%d", &numberOfCharacter);
  
  for (int i=1; i<=numberOfCharacter; i++)
  	if (i%2 == 0) printf("O");
  		else printf("X");
}