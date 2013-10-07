#include <stdio.h>

int main(void)
{
	int nbCaracteres = 26;
	char phrase[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ\0";
	int i;
	char tmp;

	printf("%s\n", phrase);

	// Décalage circulaire du tableau d'un cran vers la droite

	tmp = phrase[25];
	for (i=nbCaracteres-1; i>0; i--)
		phrase[i]=phrase[i-1];
	phrase[0] = tmp;

	// Resultat: ZABCDEFGHIJKLMNOPQRSTUVWXY
	printf("%s\n", phrase);

	// Décalage circulaire du tableau d'un cran vers la gauche
	tmp = phrase[0];
	for (i=0; i<nbCaracteres; i++)
		phrase[i]=phrase[i+1];
	phrase[25] = tmp;

	// Resultat: ABCDEFGHIJKLMNOPQRSTUVWXYZ
	printf("%s\n", phrase);

	return 0;
}