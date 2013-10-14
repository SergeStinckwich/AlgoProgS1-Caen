#include <stdio.h>

void afficher_matrice_carree(int t[2][2]) {
	// Afficher les valeurs de la matrice
	// avec un formattage
	int i,j;
	for (i=0;i<2;i++){
		for (j=0;j<2;j++)
			printf("%3d ", t[i][j]);
		printf("\n");
	}
}

int main(int argc, char const *argv[])
{
	int m1[2][2]= {{0, 1} , {2, 3}};
	int m2[2][2] = {{0, 3}, {4, 5}};
	int m3[2][2];
	int i,j;

	// Afficher m1
	printf("Matrice m1\n");
	afficher_matrice_carree(m1);

	// Afficher m2
	printf("Matrice m2\n");
	afficher_matrice_carree(m2);

	// Somme : m3 = m1+m2
	for (i=0;i<2;i++)
		for (j=0;j<2;j++)
			m3[i][j] = m1[i][j]+m2[i][j];

	// Multiplication : m3 = m1*m2
	
	// Afficher m3
	printf("Matrice m3\n");
	afficher_matrice_carree(m3);

	return 0;
}