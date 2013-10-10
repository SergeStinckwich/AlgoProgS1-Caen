#include <stdio.h>


int main(void) {
	const int nbCaracteres = 10;
	char caracteres[10] = {'a', 'b', 'c', 'd', 'a', 'b', 'c', 'a', 'b', 'a'};
	char c = 'a';
	int nbOccurrences=0;
	int i;

	for (i = 0; i<nbCaracteres; i++)
		if (caracteres[i] == c) nbOccurrences++;
	
	printf("Le caractère '%c' apparait %d fois dans le tableau de caractères.\n", c,
		nbOccurrences);

	return 0;
}