#include <stdio.h>

int main(void){
  int year1, year2;
  printf("Entrez la premiere annee : ");
  scanf("%d", &year1);
  printf("Entrez la deuxieme annee : ");
  scanf("%d", &year2);
  // nb4 correspondra au nombre d'annee multiple de 4 dans ]year1,year2]
  // nb100 correspondra au nombre d'annee multiple de 100 dans ]year1,year2]
  // nb400 correspondra au nombre d'annee multiple de 400 dans ]year1,year2]
  int nb4, nb100, nb400, tmp1, tmp2;
  
  //Calcul de nb4
  tmp1=year1+4-(year1)%4; // la plus petite annee multiple de 4 supérieur à year1;
  tmp2=year2-(year2)%4; // la plus grande annee multiple de 4 inférieur à year1;
  if(tmp1>tmp2){ // Il n'y a pas d'annee multiple de 4 dans ]year1,year2]
    nb4=0;
  }
  else{
    nb4=(tmp2-tmp1)/4+1; 
  }

  //Calcul de nb100
  tmp1=year1+100-(year1)%100; // la plus petite annee multiple de 100 supérieur à year1;
  tmp2=year2-(year2)%100; // la plus grande annee multiple de 100 inférieur à year1;
  if(tmp1>tmp2){ // Il n'y a pas d'annee multiple de 100 dans ]year1,year2]
    nb100=0;
  }
  else{
    nb100=(tmp2-tmp1)/100+1; 
  }

 //Calcul de nb400
  tmp1=year1+400-(year1)%400; // la plus petite annee multiple de 400 supérieur à year1;
  tmp2=year2-(year2)%400; // la plus grande annee multiple de 400 inférieur à year1;
  if(tmp1>tmp2){ // Il n'y a pas d'annee multiple de 400 dans ]year1,year2]
    nb400=0;
  }
  else{
    nb400=(tmp2-tmp1)/400+1; 
  }

  printf("Il y a %d annees multiples de 4, %d annees multiples de 100, %d annees multiples de 400\n", nb4, nb100, nb400);
  printf("Il y a donc %d annees bissextiles dans ]%d,%d]\n", nb4-nb100+nb400, year1, year2);
}
