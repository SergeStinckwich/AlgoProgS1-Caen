#include <stdio.h>

int main(void)

{
	int numberOfCharacter;
	int numberOfLines;
	const char* askNumberOfCharacters = "Entrer nombre de caractères ?";
	const char* askNumberOfLines = "Entrer nombre de lignes ?";

	printf("%s\n", askNumberOfCharacters);
	scanf("%d", &numberOfCharacter);

	printf("%s\n", askNumberOfLines);
  	scanf("%d", &numberOfLines);

  	int j = 1;
  	while (j<=numberOfLines)
  	{
  		if (j%2 == 0)
  			for (int i=1; i<=numberOfCharacter; i++)
  				if (i%2 == 0)
  					printf("O");
  				else
  					printf("X");
		else
			for (int i=1; i<=numberOfCharacter; i++)
				if (i%2 == 0)
					printf("X");
				else
					printf("O");
  	j++;
  	printf("\n");
  	}
return 0;
}