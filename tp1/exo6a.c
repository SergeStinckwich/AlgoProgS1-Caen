#include <stdio.h>

int main(void){
  float hourlyGrossSalary, grossSalary, netSalary, charges, workingHours;
  printf("Quel est le nombre d'heures travaillees : ");
  scanf("%f", &workingHours);
  printf("Quel est votre salaire horaire brut : ");
  scanf("%f", &hourlyGrossSalary);
  grossSalary = workingHours*hourlyGrossSalary;
  charges = grossSalary*25/100;
  netSalary = grossSalary-charges;
  printf("\nVotre salaire brut est %f.\nVotre salaire net est %f.\n", grossSalary, netSalary);
}

