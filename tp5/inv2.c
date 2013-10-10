#include <stdio.h>

int main(void) {
	int nbCaracteres = 26;
	char phrase[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\0";
	int i;
	char tmp;

	printf("Phrase initiale: %s\n", phrase);

	for (i=0; i<nbCaracteres/2; i++){
		// Inversion de deux caractères
		tmp = phrase[i];
		phrase[i]= phrase[nbCaracteres-i-1];
		phrase[nbCaracteres-i-1] = tmp;
	}

	printf("Phrase inversée: %s\n", phrase);
	return 0;
}