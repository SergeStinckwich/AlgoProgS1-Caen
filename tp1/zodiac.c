#include <stdio.h>


int main(void)
{

// Mois à 31 jours: Janvier (1), Mars (3), Mai (5), Juillet (7), Aout (8), Octobre (10), Decembre (12)
// Mois à 30 jours: Avril (4), Juin (6), Septembre (9), Novembre (11)
// Mois à 28 ou 29 jours: Février (2)

int mois, jour;

int moisValide, jourValide, dateValide;
int jourValide31, jourValide30, jourValide29;

dateValide = 0;

// Lire un jour et un mois valide
while (!dateValide){
	printf("Jour=?");
	scanf("%d", &jour);
	printf("Mois=?");
	scanf("%d", &mois);

	moisValide = (mois>=1)&&(mois<=12);
	jourValide31 = (jour<=31)&&((mois==1)||(mois==3)||(mois==5)
							||(mois==7)||(mois==8)||(mois==10)||(mois==12));
	jourValide30 = (jour<=30)&&((mois==4)||(mois==6)||(mois==9)||(mois==11));
	jourValide29 = (jour<=29)&&((mois==2));
	jourValide = (jour>0) && (jourValide29||jourValide30||jourValide31);
	dateValide = moisValide && jourValide;
	if (!dateValide) printf("Date invalide !\n");
}

// Afficher le signe en fonction de la date
printf("Votre signe est: ");
  if((mois==3 && jour>=21) || (mois==4 && jour<=21)) printf("Belier");
  if((mois==4 && jour>=22) || (mois==5 && jour<=21)) printf("Taureau");
  if((mois==5 && jour>=22) || (mois==6 && jour<=21)) printf("Gemeaux");
  if((mois==6 && jour>=22) || (mois==7 && jour<=22)) printf("Cancer");
  if((mois==7 && jour>=23) || (mois==8 && jour<=22)) printf("Lion");
  if((mois==8 && jour>=23) || (mois==9 && jour<=22)) printf("Vierge");
  if((mois==9 && jour>=23) || (mois==10 && jour<=22)) printf("Balance");
  if((mois==10 && jour>=23) || (mois==11 && jour<=22))printf("Scorpion");
  if((mois==11 && jour>=23) || (mois==12 && jour<=21)) printf("Sagittaire");
  if((mois==12 && jour>=22) || (mois==1 && jour<=20)) printf("Capricorne");
  if((mois==1 && jour>=21) || (mois==2 && jour<=19)) printf("Verseau");
  if((mois==2 && jour>=20) || (mois==3 && jour<=20)) printf("Poissons");
  printf("\n");
	return 0;
}