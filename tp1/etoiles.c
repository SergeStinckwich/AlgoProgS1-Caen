#include <stdio.h>


int main(void)
{
	int n;
	int nEstPositif, finDecompte; // Variables booléennes
	int i;

	nEstPositif = 0; // false

	// Lecture de n
	while (!nEstPositif){
		printf("n=?");
		scanf("%d", &n);
		nEstPositif = (n > 0);
	}

	finDecompte = 0;
	while (!finDecompte){
		// Affichage d'une ligne de n étoiles
		for (i=1; i<=n; i++)
			printf("*");
		// Passage à la ligne entre chaque ligne d'étoiles
		printf("\n");
		n = n - 1;
		finDecompte = (n == 0);
	}

	return 0;
}