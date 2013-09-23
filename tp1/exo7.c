#include <stdio.h>

int main(void){
  int day, month;
  
  int birthDayOk = 0;

// Mois en 31 jours : Janvier(1), Mars(3), Mai(5), Juillet(7), Aout(8), Octobre(10), Decembre(12)
// Mois en 30 jours : Avril (4), Juin (6), Septembre (9), Novembre(11)
// Mois en 28 ou 29 jours : Février (2)

  while (!birthDayOk){
  	printf("Entrez votre jour de naissance : ");
  	scanf("%d", &day);
  	printf("Entrez votre mois de naissance : ");
  	scanf("%d", &month);
  	birthDayOk = ((month>=1)&&(month<=12)&&
  				(day>=1)&&
  				(((day<=31)&&((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12)))||
  				((day<=30)&&((month==4)||(month==6)||(month==9)||(month==11)))||
  				((day<=29)&&(month==2)))
  				);
  }
  printf("\nVous etes du signe du ");

  if((month==3 && day>=21) || (month==4 && day<=21)) printf("Belier");
  if((month==4 && day>=22) || (month==5 && day<=21)) printf("Taureau");
  if((month==5 && day>=22) || (month==6 && day<=21)) printf("Gemeaux");
  if((month==6 && day>=22) || (month==7 && day<=22)) printf("Cancer");
  if((month==7 && day>=23) || (month==8 && day<=22)) printf("Lion");
  if((month==8 && day>=23) || (month==9 && day<=22)) printf("Vierge");
  if((month==9 && day>=23) || (month==10 && day<=22)) printf("Balance");
  if((month==10 && day>=23) || (month==11 && day<=22))printf("Scorpion");
  if((month==11 && day>=23) || (month==12 && day<=21)) printf("Sagittaire");
  if((month==12 && day>=22) || (month==1 && day<=20)) printf("Capricorne");
  if((month==1 && day>=21) || (month==2 && day<=19)) printf("Verseau");
  if((month==2 && day>=20) || (month==3 && day<=20)) printf("Poissons");
  printf("\n");
}
