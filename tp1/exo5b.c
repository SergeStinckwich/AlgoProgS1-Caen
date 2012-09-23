#include <stdio.h>

int main(void){
  int annee1,annee2;
  printf("Entrez la premiere annee : ");
  scanf("%d",&annee1);
  printf("Entrez la deuxieme annee : ");
  scanf("%d",&annee2);
  // nb4 correspondra au nombre d'annee multiple de 4 dans ]annee1,annee2]
  // nb100 correspondra au nombre d'annee multiple de 100 dans ]annee1,annee2]
  // nb400 correspondra au nombre d'annee multiple de 400 dans ]annee1,annee2]
  int nb4,nb100,nb400,tmp1,tmp2;
  
  //Calcul de nb4
  tmp1=annee1+4-(annee1)%4; // la plus petite annee multiple de 4 supérieur à annee1;
  tmp2=annee2-(annee2)%4; // la plus grande annee multiple de 4 inférieur à annee1;
  if(tmp1>tmp2){ // Il n'y a pas d'annee multiple de 4 dans ]annee1,annee2]
    nb4=0;
  }
  else{
    nb4=(tmp2-tmp1)/4+1; 
  }

  //Calcul de nb100
  tmp1=annee1+100-(annee1)%100; // la plus petite annee multiple de 100 supérieur à annee1;
  tmp2=annee2-(annee2)%100; // la plus grande annee multiple de 100 inférieur à annee1;
  if(tmp1>tmp2){ // Il n'y a pas d'annee multiple de 100 dans ]annee1,annee2]
    nb100=0;
  }
  else{
    nb100=(tmp2-tmp1)/100+1; 
  }

 //Calcul de nb400
  tmp1=annee1+400-(annee1)%400; // la plus petite annee multiple de 400 supérieur à annee1;
  tmp2=annee2-(annee2)%400; // la plus grande annee multiple de 400 inférieur à annee1;
  if(tmp1>tmp2){ // Il n'y a pas d'annee multiple de 400 dans ]annee1,annee2]
    nb400=0;
  }
  else{
    nb400=(tmp2-tmp1)/400+1; 
  }

  printf("Il y a %d annees multiples de 4, %d annees multiples de 100, %d annees multiples de 400\n",nb4,nb100,nb400);
  printf("Il y a donc %d annees bissextiles dans ]%d,%d]\n",nb4-nb100+nb400,annee1,annee2);
}
