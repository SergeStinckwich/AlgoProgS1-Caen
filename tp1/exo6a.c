#include <stdio.h>

int main(void){
  float sHBrut,sBrut,sNet,charges,nbHeures;
  printf("Quel est le nombre d'heures travaillees : ");
  scanf("%f",&nbHeures);
  printf("Quel est votre salaire horaire brut : ");
  scanf("%f",&sHBrut);
  sBrut=nbHeures*sHBrut;
  charges=sBrut*25/100;
  sNet=sBrut-charges;
  printf("\nVotre salaire brut est %f.\nVotre salaire net est %f.\n",sBrut,sNet);
}

