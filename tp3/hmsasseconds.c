#include <stdio.h>


int main(void){
	int heures, minutes, secondes;
	int conversionEnSecondes;
	int entreeValide;
	entreeValide = 0; // false
	while (!entreeValide){
			printf("Heures (0-23)=?");
		scanf("%d", &heures);
		entreeValide = (heures >= 0)&&(heures <= 23);
		if (!entreeValide) printf("Entrée invalide.\n");
	}
	entreeValide = 0; // false
	while (!entreeValide){
		printf("Minutes (0-59)=?");
		scanf("%d", &minutes);
		entreeValide = (minutes >= 0)&&(minutes <= 59);
		if (!entreeValide) printf("Entrée invalide.\n");
	}
	entreeValide = 0; // false
	while (!entreeValide){
		printf("Secondes (0-59)=?");
		scanf("%d", &secondes);
		entreeValide = (secondes >= 0)&&(secondes <= 59);
		if (!entreeValide) printf("Entrée invalide.\n");
	}

	conversionEnSecondes = 3600*heures+60*minutes+secondes;
	printf("%02d:%02d:%02d correspondent à %d secondes\n", 
			heures, minutes, secondes, conversionEnSecondes);

	return 0;
}