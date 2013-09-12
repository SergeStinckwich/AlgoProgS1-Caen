#include <stdio.h>

int main(void){
  int year1, year2;
  int i;
  printf("Entrez annee de depart: ");
  scanf("%d", &year1);
  printf("Entrez annee de fin: ");
  scanf("%d", &year2);

  printf("Années bissextiles:\n");
  for (i=year1+1; i<=year2; i++)
    {
      if (i%400 == 0 || (i%4 == 0 && i%100 != 0))
	printf("%d ", i);
    }

  printf("\nAnnées non bissextiles:\n");
  for (i=year1+1; i<=year2; i++)
    {
      if (!(i%400 == 0 || (i%4 == 0 && i%100 != 0)))
	printf("%d ", i);
    }
  printf("\n");
  return 0;
}
