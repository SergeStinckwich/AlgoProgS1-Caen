#include <stdio.h>

int main(int argc, char const *argv[])
{
	int const n = 3;
	int c[3][3] = {{2, 7, 6},
				   {9, 5, 1},
				   {4, 3, 8}};

	int ligne[3]; // somme des lignes
	int col[3]; // somme des colonnes
	int diag[2]; // somme des deux diagonales
	int i, j;
	int estMagique = 1;

	// Etape 1: calculer la somme de diag 1

	diag[0] = 0;
	for (i=0; i<n; i++)
		diag[0] = diag[0]+c[i][i];

	// Etape 2: Vérifier que la somme est la même pour les lignes
	i = 0;
	do {
		ligne[i] = 0;
		for (j=0; j<n; j++)
			ligne[i] = ligne[i]+c[i][j];
		if (diag[0] != ligne[i]) estMagique = 0;
		i++;
	} while ((estMagique)&&(i<n));

	// Etape 3: Vérifier que la somme est la même pour les cols
	i = 0;
	do {
		col[i] = 0;
		for (j=0; j<n; j++)
			col[i] = col[i]+c[j][i];
		if (diag[0] != col[i]) estMagique = 0;
		i++;
	} while ((estMagique)&&(i<n));

	// Etape 4: Idem pour la diag 2

	diag[1] = 0;
	for (i=0; i<n; i++)
		diag[1] = diag[1]+c[i][n-i-1];
	if (diag[0] != diag[1]) estMagique = 0;

	if (estMagique) printf("Carré magique\n");
	return 0;
}