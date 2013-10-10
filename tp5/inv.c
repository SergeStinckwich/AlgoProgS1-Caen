#include <stdio.h>

int main(int argc, char const *argv[])
{
	int nbCaracteres = 26;
	char phrase[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ\0";
	int i;
	char tmp;

	printf("%s\n", phrase);

	// Itération faisant varier i de 0 à 6
	// i = 0, phrase[0] <-> phrase[12]
	// i = 1, phrase[1] <-> phrase[11]
	// ...
	// i = 12, phrase[12] <-> phrase[0]
	
	for (i=0; i<(nbCaracteres/2); i++) {
		// Permutation du contenu de phrase[i]
		// avec phrase[(nbCaracteres-1)-i]
			tmp = phrase[i];
			phrase[i] = phrase[(nbCaracteres-1)-i];
			phrase[(nbCaracteres-1)-i] = tmp;
		}

	phrase[nbCaracteres] = '\0';
	// Resultat: ZYXWVUTSRQPONMLKJIHGFEDCBA
	printf("%s\n", phrase);

	return 0;
}