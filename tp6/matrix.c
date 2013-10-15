#include <stdio.h>
#include <stdlib.h> 

int main(void) {
	int i, j, k;
	int n, m;

	printf("n=?");
	scanf("%d", &n);
	printf("m=?");
	scanf("%d", &m);

	int m1[n][m], m2[n][m], m3[n][m], m4[m][n];

	// Initialisation de m1, m2 avec valeurs aléatoires
	for (i=0; i<n; i++)
		for (j=0; j<m; j++) {
			m1[i][j] = rand() % 100;
			m2[i][j] = rand() % 100;
		}

	// m3 = m2 + m1
	for (i=0; i<n; i++)
		for (j=0; j<m; j++)
			m3[i][j] = m1[i][j]+m2[i][j];

	// Affichage de m3
	for (i=0; i<n; i++) {
		for (j=0; j<m; j++)
			printf("%4d",m3[i][j]);
		printf("\n");
	}

	// m4 = m1 * m2
	for (i=0; i<n; i++)
		for (j=0; j<m; j++) {
			m4[i][j] = 0;
			for (k=0; k<n; k++)
				m4[i][j] = m4[i][j]+m1[i][k]*m2[k][j];
		}

	// Affichage de m4
	for (i=0; i<n; i++) {
		for (j=0; j<m; j++)
			printf("%7d",m4[i][j]);
		printf("\n");
	}

	return 0;
}