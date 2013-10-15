#include <stdio.h>

int racine(int a, int b, int c);


int racine(int a, int b, int c)
{
  return 0;
}

int main()
{
  int a,b,c;
  int nb_racines;
  
  printf("Saisie du polynome a*x*x+b*x+c\n");
  printf("Veuillez saisir a : ");
  scanf("%d", &a);

  printf("Veuillez saisir b : ");
  scanf("%d", &b);

  printf("Veuillez saisir c : ");
  scanf("%d", &c);
  
  nb_racines = racine(a, b, c);
  
  if (nb_racines == 2)
    printf("Le polynome a 2 racines. \n");

  if (nb_racines == 1)
    printf("Le polynome a 1 racine double. \n");

  if (nb_racines == 0)
    printf("Le polynome n a pas de racine reelle. \n");

  return 0;
}
