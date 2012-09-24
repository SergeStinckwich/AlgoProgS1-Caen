#include <stdio.h>

int main(void){
  int dayOfBirth, monthOfBirth, yearOfBirth;
  int dayOfToday, monthOfToday, yearOfToday;
  
  printf("Quelle est votre date de naissance (jour/mois/annee) ? ");
  scanf("%d / %d / %d", &dayOfBirth, &monthOfBirth, &yearOfBirth);
  printf("Quelle est la date d'aujourd'hui (jour/mois/annee) ? ");
  scanf("%d / %d / %d", &dayOfToday, &monthOfToday, &yearOfToday);
  if (monthOfToday>monthOfBirth || (monthOfToday == monthOfBirth && dayOfToday >= dayOfBirth)) {
    printf("\nVous avez %d ans.\n", yearOfToday-yearOfBirth);
  }
  else {
    printf("\nVous avez %d ans.\n", yearOfToday-yearOfBirth-1);
  }
}
