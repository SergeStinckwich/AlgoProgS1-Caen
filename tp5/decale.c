#include <stdio.h>

int main(void) {
	int nbCaracteres = 26;
	char phrase[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\0";
	int i,j;
	char tmp;

	printf("Phrase initiale: %s\n", phrase);
	// 26 décalages à droite
	for (j=0; j<26;j++) {
		//1 décalage à droite
		tmp = phrase[25];
		for (i=nbCaracteres-1;i>=0;i--)
			phrase[i]=phrase[i-1];
		phrase[0]=tmp;
		printf("Phrase décalée à droite: %s\n", phrase);
	}

	// 26 décalages à gauche
	for (j=0; j<26;j++) {
		//1 décalage à gauche
		tmp = phrase[0];
		for (i=0;i<nbCaracteres;i++)
			phrase[i]=phrase[i+1];
		phrase[25]=tmp;
		printf("Phrase décalée à gauche: %s\n", phrase);
	}
	
	return 0;
}