#include <stdio.h>


int main(void)
{
	int n;
	int nEstPositif, finDecompte; // Variables booléennes

	nEstPositif = 0; // false

	// Lecture de n
	while (!nEstPositif){
		printf("n=?");
		scanf("%d", &n);
		nEstPositif = (n > 0);
	}

	int m=0;
	finDecompte = 0;
	while (!finDecompte){
		m = m + 1;
		// Affichage d'une ligne de n étoiles
		int i;
		for (i=1; i<=m; i++)
			printf("*");
		// Passage à la ligne entre chaque ligne d'étoiles
		printf("\n");
		finDecompte = (m == n);
	}

	return 0;
}