#include <stdio.h>

int main(void){
  int year;
  printf("Entrez une annee : ");
  scanf("%d", &year);
  if (year%400==0 || (year%4==0 && year%100!=0)){
    printf("\nL'annee %d est bissextile.", year);
  }
  else{
    printf("\nL'annee %d n'est pas bissextile.\n", year);
  }
}
