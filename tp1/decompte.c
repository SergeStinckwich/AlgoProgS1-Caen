#include <stdio.h>

int main(void)
{
	int n;
	int nEstPositif, finDecompte; // Variables booléennes

	nEstPositif = 0; // faux

	// Lecture de n
	while (!nEstPositif){
		printf("n=?");
		scanf("%d", &n);
		nEstPositif = (n > 0);
	}

	// Faire le décompte de n à 1
	finDecompte = 0; // faux
	while (!finDecompte){
		printf("%d\n", n);
		n = n - 1;
		finDecompte = (n == 0);
	}

	// BOUM
	printf("BOUM !\n");

	return 0;
}