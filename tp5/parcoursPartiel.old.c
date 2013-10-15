#include <stdio.h>

// Copier n caractères de la position i1 de source
// vers la position i2 de destination
int main(void) {
	char destination[11] = "ABCDEFGHIJ\0";
	char source[9] = "MNOPQRST\0";
	int n = 3;
	int i1 = 5;
	int i2 = 4;
	int i;

	printf("Avant la copie\n");
	// Afficher source
	printf("%s\n", source);
	// Afficher destination
	printf("%s\n", destination);
	// copie
	
	for (i=0; i<n;i++)
		destination[i2+i] = source[i1+i];

	printf("Après la copie\n");
	// Afficher source
	printf("%s\n", source);
	// Afficher destination
	printf("%s\n", destination);
	return 0;
}