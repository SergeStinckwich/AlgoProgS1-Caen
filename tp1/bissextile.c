#include <stdio.h>

int main(void){
  int year1, year2;
  int numberOfYear = 0;
  printf("Entrez annee de depart: ");
  scanf("%d", &year1);
  printf("Entrez annee de fin: ");
  scanf("%d", &year2);
  int i;
  for (i=year1+1; i<=year2; i++)
    {
      if (i%400 == 0 || (i%4 == 0 && i%100 != 0))
	numberOfYear = numberOfYear+1;
    }
  printf("Nombre d'années bissextiles=%d\n", numberOfYear);
  return 0;
}
