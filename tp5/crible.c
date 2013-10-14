#include <stdio.h>

int main(void) {
	const int nmax = 100000;

	// estPremier[i] est vrai si i est premier, faux sinon
	int estPremier[nmax];
	int n;
	int i,j;

	printf("n=? (n<%d)", nmax);
	scanf("%d",&n);
	while (n>nmax) {
		printf("n=? (n<%d)", nmax);
		scanf("%d", &n);
	}

	// initialisation du tableau estPremier
	for (i=1;i<n; i++)
		estPremier[i] = 1;

	// crible Eratosthene
	for (i=2; i<n/2;i++) {
		if (estPremier[i]) {
			// Enlever tous les multiples de i
			j=2;
			printf("On enlève tous les multiples de %d: ",i);
			while (i*j<n) {
				printf("%d ", j*i);
				estPremier[j*i]=0;
				j++;}
			printf("\n");
			}
		}

	// Affichage du tableau
	printf("Les nombres premiers de 1 à %d sont: ", n);
	for (i=1; i<n; i++)
		if (estPremier[i]) printf("%d ", i);
	return 0;
}