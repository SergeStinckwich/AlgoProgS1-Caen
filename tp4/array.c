#include <stdio.h>

int main(){
// Entrer 10 notes (entre 0 et 20) dans un tableau
// Vérifier que les notes sont entre 0 et 20.
// Afficher la somme des 10 notes
// Afficher la moyenne des 10 notes
	
	int notes[10];
	int i;
	int sommeNotes;
	float moyenne;
	int noteOk;

	for (i=0; i<10;i++) printf("%d ",notes[i]);
		
	sommeNotes = 0;
	for (i=0; i<10; i++){
		noteOk = 0;
		while (!noteOk){
			printf("Entrer la note %d=?", i+1);
			scanf("%d", &notes[i]);
			noteOk = (notes[i]>=0)&&(notes[i]<=20);
		}
		sommeNotes = sommeNotes + notes[i];
	}

	moyenne = sommeNotes /10.0;
	printf("Somme = %d\n", sommeNotes);
	printf("Moyenne = %f\n", moyenne);
	return 0;
}