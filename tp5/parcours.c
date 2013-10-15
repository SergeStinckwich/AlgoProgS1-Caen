#include <stdio.h>

int main(void){
	int nbValeurs;
	int i;

	printf("nbValeurs=?");
	scanf("%d", &nbValeurs);

	int notes[nbValeurs];
	int noteOk;
	int sommeNotes = 0;
	int sommeIndices = 0;
	int maximum = 0;
	int positionMaximum = 0;

	for (i=0;i<nbValeurs; i++) {
		noteOk = 0;
		while (!noteOk) {
			printf("notes[%d]=?", i);
			scanf("%d", &notes[i]);
			noteOk = (notes[i]>=0)&&(notes[i]<=20);
			if (!noteOk) printf("Note incorrecte\n");
		}
		sommeNotes = sommeNotes + notes[i];
		sommeIndices = sommeIndices + i;
		if (notes[i]>maximum) {
			maximum = notes[i];
			positionMaximum = i;
		}
	}

	printf("Somme des notes=%d\n", sommeNotes);
	printf("Somme des indices=%d\n", sommeIndices);
	printf("Le maximum est %d à la position %d\n",
		maximum, positionMaximum);
	return 0;
}