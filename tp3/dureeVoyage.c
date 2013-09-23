#include <stdio.h>

int main(void)
{
	
	int heuresDepart, minutesDepart;
	int heuresDuree, minutesDuree;
	int heuresArrivee, minutesArrivee;

	int entreeValide;

	printf("Entrée l'heure de départ de votre voyage:\n");
	entreeValide = 0; // false
	while (!entreeValide){
		printf("Heures (0-23)=?");
		scanf("%d", &heuresDepart);
		entreeValide = (heuresDepart >= 0)&&(heuresDepart <= 23);
		if (!entreeValide) printf("Entrée invalide.\n");
	}

	entreeValide = 0; // false
	while (!entreeValide){
		printf("Minutes (0-59)=?");
		scanf("%d", &minutesDepart);
		entreeValide = (minutesDepart >= 0)&&(minutesDepart <= 59);
		if (!entreeValide) printf("Entrée invalide.\n");
	}

	printf("Durée de votre voyage:\n");
	entreeValide = 0; // false
	while (!entreeValide){
		printf("Heures (0-23)=?");
		scanf("%d", &heuresDuree);
		entreeValide = (heuresDuree >= 0)&&(heuresDuree <= 23);
		if (!entreeValide) printf("Entrée invalide.\n");
	}

	entreeValide = 0; // false
	while (!entreeValide){
		printf("Minutes (0-59)=?");
		scanf("%d", &minutesDuree);
		entreeValide = (minutesDuree >= 0)&&(minutesDuree <= 59);
		if (!entreeValide) printf("Entrée invalide.\n");
	}

	minutesArrivee = minutesDepart+minutesDuree;
	heuresArrivee = heuresDepart+heuresDuree;
	if (minutesArrivee > 59) {
				minutesArrivee = minutesArrivee - 60; 
				heuresArrivee++;}
	if (heuresArrivee > 23) heuresArrivee=heuresArrivee - 24;

	printf("Votre voyage commence à %02d:%02d et dure: %02d:%02d.\n",
			heuresDepart, minutesDepart, heuresDuree, minutesDuree);
	printf("Vous arriverez à %02d:%02d\n", heuresArrivee,minutesArrivee);
	return 0;
}