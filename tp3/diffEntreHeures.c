#include <stdio.h>

int main(void){
	int heures1, minutes1, secondes1;
	int heures2, minutes2, secondes2;
	int differenceEnSecondes;
	int entreeValide;

	entreeValide = 0; // false
	while (!entreeValide){
		printf("Heures (0-23)=?");
		scanf("%d", &heures1);
		entreeValide = (heures1 >= 0)&&(heures1 <= 23);
		if (!entreeValide) printf("Entrée invalide.\n");
	}
	entreeValide = 0; // false
	while (!entreeValide){
		printf("Minutes (0-59)=?");
		scanf("%d", &minutes1);
		entreeValide = (minutes1 >= 0)&&(minutes1 <= 59);
		if (!entreeValide) printf("Entrée invalide.\n");
	}
	entreeValide = 0; // false
	while (!entreeValide){
		printf("Secondes (0-59)=?");
		scanf("%d", &secondes1);
		entreeValide = (secondes1 >= 0)&&(secondes1 <= 59);
		if (!entreeValide) printf("Entrée invalide.\n");
	}

	entreeValide = 0; // false
	while (!entreeValide){
		printf("Heures (0-23)=?");
		scanf("%d", &heures2);
		entreeValide = (heures2 >= 0)&&(heures2 <= 23);
		if (!entreeValide) printf("Entrée invalide.\n");
	}
	entreeValide = 0; // false
	while (!entreeValide){
		printf("Minutes (0-59)=?");
		scanf("%d", &minutes2);
		entreeValide = (minutes2 >= 0)&&(minutes2 <= 59);
		if (!entreeValide) printf("Entrée invalide.\n");
	}
	entreeValide = 0; // false
	while (!entreeValide){
		printf("Secondes (0-59)=?");
		scanf("%d", &secondes2);
		entreeValide = (secondes2 >= 0)&&(secondes2 <= 59);
		if (!entreeValide) printf("Entrée invalide.\n");
	}

	differenceEnSecondes = 3600*heures1+60*minutes1+secondes1 - 3600*heures2+60*minutes2+secondes2;
	if (differenceEnSecondes<0) differenceEnSecondes = - differenceEnSecondes;
	printf("Entre %02d:%02d:%02d et %02d:%02d:%02d il s'est écoulé %d secondes\n",
		heures1, minutes1, secondes1,
		heures2, minutes2, secondes2,
		differenceEnSecondes);

	return 0;
}