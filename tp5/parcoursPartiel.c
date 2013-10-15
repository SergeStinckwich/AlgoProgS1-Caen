#include <stdio.h>

// Parcours partiel d'un tableau
// Entrees : tableau source, destination

int main()
{
	char source[9]= "MNOPQRST\0";
	char destination [11] = "ABCDEFGHIJ\0";
	int n = 3;
	int i1 = 5;
	int i2 = 4;
	int i;

	printf("%s\n", source);
	printf("%s\n", destination);

	// Copier n caractères du tableau source à la position i1
	// vers le tableau destination à la position i2

	for (i=0; i<n; i++)
		destination[i2-1+i] = source[i1-1+i];

	printf("%s\n", source);
	printf("%s\n", destination);

	return 0;
}